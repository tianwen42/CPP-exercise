#include <iostream>
#include <string>
using namespace std;

void test1() {
    cout << "test1-------" << endl;
    int i = 0;
    int j = 0;
    int* j_ptr;

    // one
    int* i_ptr = &i;
    j_ptr = &j;
    cout << i_ptr << endl;
    cout << "i" << *i_ptr << endl;

    // two
    cout << j_ptr << endl;
    cout << "j" << *j_ptr << endl;

    // 二级指针
    int** ii_ptr = &i_ptr;
    cout << "&i_ptr " << &i_ptr << ' ' << ii_ptr << endl;
    cout << "**i_ptr " << **ii_ptr << endl;
}

void test2() {}

int main() {
    test1();
    test2();

    return 0;
}
