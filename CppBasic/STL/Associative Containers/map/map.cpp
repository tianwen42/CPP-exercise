//
// Created by YangLin on 2022/4/17.
// map[n] = m; //n为键，m为值

#include <iostream>
#include <map>
using namespace std;

static void ShiftOperators() {
    map<int, int> m;
    for (int i = 0; i < 7; i++) {
        m[i] = i;
        cout << "m[" << i << "] = " << m[i] << endl;
    }
    cout << m.size() << endl;
}

int main() {
    ShiftOperators();
    return 0;
}