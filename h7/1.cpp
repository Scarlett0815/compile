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

void func(unique_ptr<Test> & ptest){
    ptest -> setStr("yes");
    return;
}

void func1(unique_ptr<Test> *  ptest){
    (*ptest)->setStr("hello");
    return;
}

int main()
{
    unique_ptr<Test> ptest(new Test("123"));	//调用构造函数，输出Test creat
    func(ptest);
    ptest -> print();
    func1(&ptest);
    ptest -> print();
    return 0;					//此时程序中还有两个对象，调用两次析构函数释放对象
}