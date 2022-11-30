/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {

public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        while(nums.size()>1&&(nums[nums.size()-1]!=nums[nums.size()-2])){
            // 判断栈顶和倒二是否相等，注意边界条件
            nums.pop_back();
        }
        // for(int i=0; i<nums.size();i++){
        //     cout << nums[i] << " ";
        // }
        if(nums.size()==1) return false;else return true;
    }
};
// @lc code=end

