//
// Created by YangLin on 2022/4/2.
//
#include<iostream>
using namespace std;
class A{//虚函数示例代码2
public:
    virtual void fun(){cout<<"A::fun"<<endl;}
    virtual void fun2(){cout<<"A::fun2"<<endl;}
};
class B : public A{
public:
    void fun(){cout<<"B::fun"<<endl;}
    void fun2(){cout<<"B::fun2"<<endl;}
};//end//虚函数示例代码2
int main()
{
    void(A::*fun)();//定义一个函数指针
    A *p=new B;
    fun=&A::fun;
    (p->*fun)();
    fun=&A::fun2;
    (p->*fun)();
    delete p;
    system("pause");
    return 0;
}