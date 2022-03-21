//
// Created by Administrator on 2022/2/28.
//
#include<iostream>
#include"_7.h"

int main(void) {
    using namespace std;
    static Solution SA=Solution();
    vector<string> STR={"flower","flow","flight"," ","flowe"};
    cout<<SA.longestCommonPrefix(STR)<<endl;
    return 0;
}
