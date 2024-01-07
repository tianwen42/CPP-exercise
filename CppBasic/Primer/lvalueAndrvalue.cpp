#include <iostream>

int main() {
    int x = 5;      // x 是左值
    int y = x + 3;  // x + 3 是右值

    int array[] = {1, 2, 3};
    array[1] = 10;  // array[1] 是左值

    // 函数调用返回的临时值是右值
    std::string getName() {
        return "John";
    }

    std::string name = getName();  // getName() 是右值

    int* ptr = &x;  // &x 是右值，但 ptr 是左值
    *ptr = 7;       // *ptr 是左值

    // 右值引用的示例
    int&& rvalueRef = 42;       // 42 是右值
    int someValue = rvalueRef;  // rvalueRef 是左值，someValue 是左值

    //  i 是标识符，是可修改的左值
    // *psi 或 arr[3] 是表达式，是可修改的左值
    // 2 * i 或 &i 或 &psi，不是标识符，是右值

    // const char *pc = "Good morning my neighbors";
    // pc 是可修改的左值
    // *pc 是不可修改的左值
}
