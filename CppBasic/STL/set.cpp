//
// Created by YangLin on 2022/4/17.
// Set
// 不存在重复元素的集合(升序)

#include <iostream>
#include <set>
using namespace std;

static void Set() {
    set<int> s;  // 默认按升序排列
    s.insert(4);
    s.insert(4);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << "s.size " << s.size()
         << endl;  // 输出 1 ,在set插入中相同元素只会存在一个
}

int main() {
    Set();
    return 0;
}