#include <iostream>
using namespace std;

class CBase1
{
};
// 32-bit: sizeof(CBase)=1；
// 64-bit: sizeof(CBase)=1；

class CBase2
{
    int a;  // 4
    char p; // 1
};
// 内存对齐
// 32-bit: sizeof(CBase)=8；
// 64-bit: sizeof(CBase)=8；

class CBase3
{
public:
    CBase3(void){};
    virtual ~CBase3(void){};

private:
    int a;
    char *p;
};
// 32-bit: sizeof(CBase)=12；4+4+4 [a+p+~]
// 64-bit: sizeof(CBase)=24；4(8)+8+8 [a+p+~] 内存对齐

class CChild : public CBase3
{
public:
    CChild(void){};
    ~CChild(void){};
    virtual void test(){};

private:
    int b;
};
// 4 子类成员变量
// 4+4 继承自 CBase 的部分，对齐之后16
// 32-bit: sizeof(CChild)=16；
// 64-bit: sizeof(CChild)=32；

int main()
{
    int i = 1;
    CBase1 A;
    CBase2 B;
    CBase3 C;
    CChild D;
    cout << "A-" << sizeof(A) << endl;
    cout << "B-" << sizeof(B) << endl;
    cout << "C-" << sizeof(C) << endl;
    cout << "D-" << sizeof(D) << endl;
    return 0;
}
