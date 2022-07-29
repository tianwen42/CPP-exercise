#ifndef CPP__12_H
#define CPP__12_H
#include<iostream>
#include<vector>

using namespace std;
#endif //CPP__12_H

class Solution {
public:
    int reserve(vector<int> &nums) {
        int i = 0;
        int j =nums.size()-1;
        for(i,j;i<j;i++,j--){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        
        return 0;
    }


};