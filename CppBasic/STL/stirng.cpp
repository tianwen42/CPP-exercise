#include <iostream>
#include <string>
using namespace std;

void test1() {
    cout << "test1-------" << endl;
    string str1 = "hello";
    string str2 = "world";
    string str3 = str1 + str2;
    cout << str3 << endl;
    str3.at(5) = 'W';
    str3[0] = 'H';
    cout << str3 << endl;
}

void test2() {
    cout << "test2-------" << endl;
    string str1 = "www.ppp.aaa.bbbb.aaa.com";

    while (1) {
        int res = str1.find("aaa");
        if (res == -1)
            break;
        str1.replace(res, 3, "***");
    }

    cout << str1 << endl;
}

void test3() {
    cout << "test3-------" << endl;
    string str1 = "qwerty";
    string str2 = "qwerty";
    cout << str1.compare(str2) << endl;  // 0 -> 相等
    cout << (str1 == str2) << endl;      // 重载
}

void test4() {
    cout << "test4-------" << endl;
    string str1 = "haha:hehehe:qwqwqesa:hehe";
    int pos = 0;
    while (1) {
        int ret = str1.find(":", pos);
        if (ret < 0) {
            string subs = str1.substr(pos, str1.size() - pos);
            cout << subs << endl;
            break;
        }

        string subs = str1.substr(pos, ret - pos);
        cout << subs << endl;
        pos = ret + 1;
    }
}

void test5() {
    cout << "test5-------" << endl;
    string str1 = "haha:hehehe:qwqwqesa:hehe";
    cout << str1.insert(2, "***") << endl;
    string str2 = "haha:hehehe:qwq";
    cout << str2.erase(2, 2) << endl;
}

void test6() {
    cout << "test6-------" << endl;
    // charTostring
    string str1;
    str1 = (string) "hello";
    cout << str1 << endl;

    // stringTochar
    // char* p = str2; X
    // char* p = (char *)str2.c_str(); √
    string str2 = "helloWorld";
    char* p = (char*)str2.c_str();
    cout << p << endl;
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
