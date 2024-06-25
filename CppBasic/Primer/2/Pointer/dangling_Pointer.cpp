#include <stdio.h>
// 悬垂指针（dangling
// pointer），它指向了一个已经被销毁的对象。使用悬垂指针是未定义行为
char* get_a_string() {
    char str[] = "Hello world!";
    return str;
}

char* get_b_string() {
    char* s = "Hello world!";  // 动态内存分配或者将数组声明为静态变量
    return s;
}

int main() {
    char* str = get_a_string();
    char* b = get_b_string();
    printf("%s\n", str);
    printf("%s\n", b);
}