//
// Created by YangLin on 2022/4/17.
// 虚函数

#ifndef CPP_VIRTUALFUCTION_H
#define CPP_VIRTUALFUCTION_H

#endif // CPP_VIRTUALFUCTION_H

#include <iostream>

using namespace std;

class A
{ //虚函数示例代码2
public:
    virtual void fun() { cout << "A::fun" << endl; }

    virtual void fun2() { cout << "A::fun2" << endl; }
};

class B : public A
{
public:
    void fun() { cout << "B::fun" << endl; }

    void fun2() { cout << "B::fun2" << endl; }
}; // end//虚函数示例代码2

static int virtualfun()
{
    void (A::*fun)(); //定义一个函数指针
    A *p = new B;
    fun = &A::fun;

    cout << "A *p = new B " << endl; //函数指针指向了B,根据对象类型调用，虚函数作用在于重载继承类的函数
    cout << "(p->*fun)();" << endl;
    (p->*fun)();

    fun = &A::fun2;
    cout << "(p->*fun2)();" << endl;
    (p->*fun)();
    delete p;
    // system("pause");
    return 0;
}

int main()
{
    virtualfun();
    return 0;
}