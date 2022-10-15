# task1

## 结论

我认为这是不可以的。

## 实验证明

首先我基于`step/unique_ptr.cpp`写了一个简单的代码：

```
#include<iostream>
#include<memory>
using namespace std;
class Test
{
public:
    Test(string s)
    {
        str = s;
       cout<<"Test creat\n";
    }
    ~Test()
    {
        cout<<"Test delete:"<<str<<endl;
    }
    string& getStr()
    {
        return str;
    }
    void setStr(string s)
    {
        str = s;
    }
    void print()
    {
        cout<<str<<endl;
    }
private:
    string str;
};
unique_ptr<Test> fun()
{
    return unique_ptr<Test>(new Test("789"));//调用了构造函数，输出Test creat
}

void func1(unique_ptr<Test> *  ptest){
    (*ptest)->setStr("hello");
    return;
}

void func(unique_ptr<Test>  ptest){
    ptest -> print();
    return;
}

int main()
{
    unique_ptr<Test> ptest(new Test("123"));	//调用构造函数，输出Test creat
    func1(&ptest);
    ptest -> print();
    return 0;
}
```

由上可知，`func1`函数来体现它的引用传递。

输出展示为：

```
Test creat
hello
Test delete:hello
```
但是当变成：
```
#include<iostream>
#include<memory>
using namespace std;
class Test
{
public:
    Test(string s)
    {
        str = s;
       cout<<"Test creat\n";
    }
    ~Test()
    {
        cout<<"Test delete:"<<str<<endl;
    }
    string& getStr()
    {
        return str;
    }
    void setStr(string s)
    {
        str = s;
    }
    void print()
    {
        cout<<str<<endl;
    }
private:
    string str;
};
unique_ptr<Test> fun()
{
    return unique_ptr<Test>(new Test("789"));//调用了构造函数，输出Test creat
}

void func1(unique_ptr<Test> *  ptest){
    (*ptest)->setStr("hello");
    return;
}

void func(unique_ptr<Test>  ptest){
    ptest -> print();
    return;
}

int main()
{
    unique_ptr<Test> ptest(new Test("123"));	//调用构造函数，输出Test creat
    func(ptest);
    ptest -> print();
    return 0;
}
```
就会编译失败，事实证明无法进行值传递。

# task2

## 结论

如果该`shared_ptr`释放了，不可以通过它原来管理的`weak_ptr`去访问对象。代码如下：

```
#include<iostream>
#include<memory>
using namespace std;

template <typename T>
class B;

class A1
{
public:
    weak_ptr<B<A1>> pb_;
    ~A1()
    {
        cout<<"A1 delete\n";
    }
};

template <typename T>
class B
{
public:
    shared_ptr<T> pa_;
    ~B()
    {
        cout<<"B delete\n";
    }
};

void fun1()
{
    shared_ptr<B<A1>> pb(new B<A1>());
    shared_ptr<A1> pa(new A1());
    pb->pa_ = pa;
    pa->pb_ = pb;
    cout<<"fun1 : "<<pb.use_count()<<endl;
    cout<<"fun1 : "<<pa.use_count()<<endl;
    pb.reset();
    cout << "fun1: "<< (pa -> pb_ -> pa_).use_count() << endl;
}

int main()
{
    fun1();
    return 0;
}
```

从中可以看到如果可以管理那么`cout << "fun1: "<< (pa -> pb_ -> pa_).use_count() << endl;`这条语句就是没有错误的，就像是当`class A1`中的`pb_`被定义为`shared_ptr`时那句语句就是没有错误的，就说明我们释放了`pb`这一个`shared_ptr`之后另一个`shared_ptr`及`pb_`依旧可以控制所指向内容，但是这里程序报错了，错误如下：

```
4.cpp: In function ‘void fun1()’:
4.cpp:38:35: error: base operand of ‘->’ has non-pointer type ‘std::weak_ptr<B<A1> >’
   38 |     cout << "fun1: "<< (pa -> pb_ -> pa_).use_count() << endl;
      |
```

可见，在释放`pb`之后，我们无法再使用`pb_`这一个`weak_ptr`来控制原来的指向值。