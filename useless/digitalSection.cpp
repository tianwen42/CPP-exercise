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
        //���ְ��������
        using namespace std;
        std::cout << x << std::endl;
        while (x != 0) {
            cout << "x%10ȡ��ĩλ: " << x % 10 << "  ";
            cout << "x/10ȥ��ĩλ: " << x / 10 << endl;
            // cout<<ans<<endl;
            x /= 10;
        }
        return 0;
    }
};

// 105
// x%10ȡ��ĩλ: 5  x/10ȥ��ĩλ: 10
// x%10ȡ��ĩλ: 0  x/10ȥ��ĩλ: 1
// x%10ȡ��ĩλ: 1  x/10ȥ��ĩλ: 0

