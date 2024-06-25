//
// Created by Administrator on 2022/2/28.
//

#ifndef CPP__1_H
#define CPP__1_H

#endif //CPP__1_H
#include<iostream>

class Solution {
public:
    int digitalSection(int x) {
        //数字按逆序遍历
        using namespace std;
        std::cout << x << std::endl;
        while (x != 0) {
            cout << "x%10取最末位: " << x % 10 << "  ";
            cout << "x/10去除末位: " << x / 10 << endl;
            // cout<<ans<<endl;
            x /= 10;
        }
        return 0;
    }
};

// 105
// x%10取最末位: 5  x/10去除末位: 10
// x%10取最末位: 0  x/10去除末位: 1
// x%10取最末位: 1  x/10去除末位: 0

