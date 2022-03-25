//
// Created by Administrator on 2022/2/27.
//
#include <iostream>
#include<math.h>

class Solution {
public:
    int getLenth(int x) {
        int lenth = 0;
        while (x > 0) {
            x /= 10;
            lenth++;
        }
        return lenth;
    }

};

int main() {
    using namespace std;
    Solution example = Solution();
    // cout<<example.reverse2(-150) << endl;


}
