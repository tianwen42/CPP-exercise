//
// Project:CPP
// Created by Yanglin on 2022/3/9 10:02.
//

#ifndef CPP__1_H
#define CPP__1_H

#include <vector>

using namespace std;
#endif //CPP__1_H

class Solutions {
public:
    static int intTobinaries(int n) {
        vector<int> stack;
        while (n) {
            // cout<<n%2<<endl;
            stack.push_back(n % 2);
            n = n / 2;
        }
        int res = 0;
        //pop_back
        for (int i = stack.size() - 1; i >= 0; i--) {
            res = res * 10 + stack[i];
            stack.pop_back();
            // stringstream stream;
            // stream<<stack[i];  //n为int类型
            // res+=stream.str();

        }
        return res;

    }
};