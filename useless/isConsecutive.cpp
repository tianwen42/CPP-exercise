#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    bool isConsecutive(std::vector<int>& nums) {
        // if(nums == nullptr) return;
        int n = nums.size();
        // size
        std::sort(nums.begin(), nums.end());
        int min = nums[0];
        // 最小值
        std::vector<int> vec;
        for (int i = min; i <= n + min - 1; i++) {
            vec.push_back(i);
        }
        int i = 0;
        while (i < vec.size()) {
            if (vec[i] == nums[i])
                i++;
            else
                return false;
        }
        return true;
    }
};