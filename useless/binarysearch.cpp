//
// Created by YangLin on 2022/3/27.
//

#ifndef CPP__11_H
#define CPP__11_H
#include<iostream>
#include<vector>

using namespace std;
#endif //CPP__11_H

class Solution {
public:
    int search(vector<int> &nums, int target) {
        int head = 0;
        int rear = nums.size() - 1;
        int mid;
        while (head <= rear) {
            mid = (head + rear) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target) {
                head = mid + 1; // 注意
            } else if (nums[mid] > target) {
                rear = mid - 1;
            }
        }
        return 0;
    }
};