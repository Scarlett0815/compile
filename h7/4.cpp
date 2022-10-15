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