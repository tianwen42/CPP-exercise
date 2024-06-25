#include <iostream>
// 1.静态存储期（static）
// 在程序开始时创建，在程序结束时销毁。如全局变量和静态变量。
// 2.自动存储期（automatic）
// 在程序进入作用域时创建，在程序离开作用域时销毁。如局部变量。
// 3.动态分配存储期（allocated）
// 在程序显式地分配内存时创建，在程序显式地释放内存时销毁。如 malloc()
// 分配的内存。

int globalVariable = 10;  // 全局变量，静态存储期

int Function() {
    static int staticVariable = 5;
    // 静态变量，存储在静态存储区，其生存期为整个程序的执行期间
    int automaticVariable = 3;
    // 自动存储期（automatic），存储在栈上，其生存期为函数执行期间

    std::cout << "staticVariable: " << staticVariable << std::endl;
    std::cout << "automaticVariable: " << automaticVariable << std::endl;
    return staticVariable;  //
}

int main() {
    Function();
    int b = Function();
    std::cout << "globalVariable: " << globalVariable << std::endl;
    std::cout << "staticVariable: " << b << std::endl;
    return 0;
}