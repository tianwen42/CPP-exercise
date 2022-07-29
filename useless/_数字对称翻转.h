//
// Created by YangLin on 2022/3/25.
//

#ifndef CPP__数字对称翻转_H
#define CPP__数字对称翻转_H

#endif //CPP__数字对称翻转_H
#include <iostream>

class Solution {
public:
    int symmetryReverse(int x) {
        //对称翻转
        using namespace std;
        int ans = x;
        while (x != 0) {
            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
            ans = ans * 10 + x % 10;
            // cout<<ans<<endl;
            x /= 10;
        }
        return ans;
    }

};