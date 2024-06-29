#include <iostream>
#include <memory>

struct Base {
    virtual void f(int a = 7) { std::cout << "Base " << a << std::endl; }
};
struct Derived : Base {
    void f(int a) override { std::cout << "Derived " << a << std::endl; }
};
void foo(int a, int b = 5) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

int main() {
    // 1.尝试在调用时修改默认参数值
    foo(2);  // 输出：a: 2, b: 5
    // foo(3, 7);  // 这会引发编译错误

    std::unique_ptr<Base> ptr{new Derived};
    ptr->f();  // Derived 7
    // 2.ptr 静态类型:Base  动态类型:Derived  a默认参数按静态类型确定
    return 0;
}