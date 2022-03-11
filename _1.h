//
// Project:CPP
// Created by Yanglin on 2022/3/9 10:02.
//

#ifndef CPP__1_H
#define CPP__1_H

#include <vector>
#include<sstream>

using namespace std;
#endif //CPP__1_H

class Solutions {
public:
    static void intTobinaries(int n) {
        vector<int> stack;
        while (n) {
            // cout<<n%2<<endl;
            stack.push_back(n % 2);
            n = n / 2;

        }
        string res="";
        for (int i =stack.size()-1; i>=0 ; i--) {
            // stack.pop_back();
            stringstream stream;
            stream<<stack[i];  //n为int类型
            res+=stream.str();
            cout << res << endl;
        }
        for (int i =0; i<stack.size(); i++) {
            cout << "stack"<<stack[i] << endl;
        }

    }
};