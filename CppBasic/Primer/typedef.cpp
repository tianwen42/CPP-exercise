#include <iostream>
typedef struct point {
    int x;
    int y;
} a;

int main()
{
    a p1; // 宏定义别名
    point p2;
    p1.x = 3;
    p1.y = 4;
    p2.x = 1;
    p2.y = 2;
    std::cout << p1.x << " " << p1.y << std::endl;
    std::cout << p2.x << " " << p2.y << std::endl;
    return 0;
}