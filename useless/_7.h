//
// Created by Administrator on 2022/3/21.
//

#ifndef CPP__7_H
#define CPP__7_H

#endif //CPP__7_H

#include<vector>
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        int idx = -1;
        for (int it = 0; it < strs.size(); it++) {
            cout << strs[it] << " ";
        }
        cout<<endl;
        sort(strs.begin(),strs.end());
        // vector<int>::iterator it;
        for (int it = 0; it < strs.size(); it++) {
            if (strs[it] == "")return "";
            cout << strs[it] << " ";
        }
        return "";
    }
};