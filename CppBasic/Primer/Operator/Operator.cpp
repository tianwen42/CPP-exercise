//
// Created by YangLin on 2022/4/17.
// 操作符
// 主要是一些运算符实例

#ifndef CPP_OPERATOR_H
#define CPP_OPERATOR_H
#include <iostream>
#endif  // CPP_OPERATOR_H
using namespace std;

static void ShiftOperators() {
    // 移位运算
    cout << "num=4" << endl;
    int n = 4 << 2;
    // 左乘
    cout << "4<<2: " << n << endl;
    int m = 4 >> 2;
    // 右除
    cout << "4>>2: " << m << endl;
}

int main() {
    ShiftOperators();
    return 0;
}
