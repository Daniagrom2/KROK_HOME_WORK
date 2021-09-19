#include<iostream>
using namespace std;

struct A
{
    virtual void operator!(){cout<<"Hello from À"<<endl;}
    A(){cout<<"A"<<endl;}
    ~A(){cout<<"~A"<<endl;}
};
struct B:public A
{
    void operator!(){cout<<"Hello from B"<<endl;}
    B(){cout<<"B"<<endl;}
    ~B(){cout<<"~B"<<endl;}
};
int main()
{
    A *a;
    a=new B;
    !*a;
    delete a;
}
