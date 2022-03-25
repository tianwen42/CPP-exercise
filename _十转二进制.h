//
// Project:CPP
// Created by Yanglin on 2022/3/9 10:02.
//

#ifndef CPP__1_H
#define CPP__1_H

#include<vector>
#include<stack>

using namespace std;
#endif //CPP__1_H

class Solutions {
public:
    static int intTobinaries(int n) {
        stack<int> stack;
        while (n) {
            // cout<<n%2<<endl;
            stack.push(n % 2);
            n = n / 2;
        }
        int res = 0;
        //pop_back
        while (!stack.empty()) {
            res = res * 10 + stack.top();
            stack.pop();
            // stringstream stream;
            // stream<<stack[i];  //n为int类型
            // res+=stream.str();
        }
        return res;

    }
};