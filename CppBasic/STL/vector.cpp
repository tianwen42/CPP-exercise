#include <iostream>
#include <vector>
using namespace std;
void printVectorInt(vector<int>& v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void test1() {
    cout << "test1-------" << endl;
    // 构造方式
    vector<int> v1;
    vector<int> v2(10, 1);
    vector<int> v3{10, 20, 30, 40, 50};
    vector<int> v4 = v3;
    vector<int> v5(v3.begin() + 2, v3.end() - 1);  // 常用
    vector<int> v6(7);
    vector<int> v7;
    v7.assign(v3.begin(), v3.end());
    vector<int> v8;
    v8.assign(2, 10);

    cout << v2.size() << " " << v2.capacity() << endl;
    cout << "v3[1]:" << v3[1] << endl;
    cout << "v5[0]:" << v5[0] << endl;
    cout << "v6[5]:" << v6[5] << endl;
    printVectorInt(v7);
    printVectorInt(v8);
}

void test2() {
    cout << "test2-------" << endl;
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(10);
    v1.push_back(20);
    cout << v1[1] << " " << &v1 << endl;

    // 下标遍历
    for (int i = 0; i < v1.size(); i++) {
        cout << &v1[i] << " " << v1[i] << endl;
    }
    // 迭代器遍历
    for (vector<int>::iterator ite = v1.begin(); ite != v1.end(); ++ite) {
        cout << &ite << " 迭代器遍历" << *ite << endl;
    }
    //C++11特性
    for (int i:{10,20,30}) {
        cout << &i << " C++11特性遍历" << i << endl;
    }
    // auto遍历
    for (auto iter = v1.begin(); iter != v1.end(); iter++) {
        cout << &iter << " 自动类型推导" << *iter << endl;   
    }
    // C++11,auto关键字的另一种方式
    for (auto i : v1) {
        cout << &i << " " << i << endl;
    }
}

void test3() {
    cout << "test3-------" << endl;
    vector<int> v1;
    vector<int>::iterator it;
    cout << v1.size() << " " << v1.capacity() << endl;

    int i = 0;
    int count = 0;
    for (size_t i = 0; i < 1000; i++) {
        v1.push_back(i);
        // 开辟空间判断条件
        if (it != v1.begin()) {
            count++;
            cout << "第" << count << "次开辟空间：" << v1.capacity() << endl;
            it = v1.begin();
        }
    }
    // 区分size和capacity,自动扩容机制
    vector<int> v2;
    for (size_t i = 0; i < 7; i++) {
        v2.push_back(i);
        cout << v2.size() << " " << v2.capacity() << endl;
    }
}

void test4() {
    cout << "test4-------" << endl;
    vector<int> v1(5, 100);
    vector<int> v2(5, 200);
    v1.swap(v2);
    printVectorInt(v1);
    printVectorInt(v2);

    vector<int> v3(5, 300);
    v3.resize(7);
    printVectorInt(v3);
    vector<int> v4(5, 400);
    v4.resize(7, 2);
    printVectorInt(v4);
}

void test5() {
    cout << "test5-------" << endl;
    vector<int> v1{10, 20, 30, 40, 50};
    printVectorInt(v1);
    cout << v1.front() << " " << v1.back() << endl;
    cout << v1[0] << " " << v1.at(0) << endl;

    v1.pop_back();
    printVectorInt(v1);
    v1.insert(v1.begin() + 2, 3, 100);  // 插入
    printVectorInt(v1);
    v1.erase(v1.begin() + 2, v1.begin() + 5);  // 删除
    printVectorInt(v1);
    v1.clear();
    cout << "after clear# size: " << v1.size() << " capacity: " << v1.capacity()
         << endl;
}

void test6() {
    cout << "test6-------当申请了一片内存过大之后,如何缩小这片内存?" << endl;
    // 当申请了一片内存过大之后,如何缩小这片内存? 通过匿名对象拷贝构造交换
    vector<int> v1;
    v1.reserve(1000);
    v1.push_back(100);
    v1.push_back(200);
    v1.push_back(300);
    v1.push_back(400);
    cout << "v1(1000)-size: " << v1.size() << " capacity:" << v1.capacity()
         << endl;
    vector<int>(v1).swap(v1);
    // 申请匿名对象（拷贝v1） Oject-size-4
    // 交换v1和匿名对象
    // 匿名对象在周期之后回收掉
    // ps：通过匿名对象拷贝构造只拷贝有数据的区域
    cout << "v1-size: " << v1.size() << " capacity:" << v1.capacity() << endl;
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    return 0;
}
