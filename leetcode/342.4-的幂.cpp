/*
 * @lc app=leetcode.cn id=342 lang=cpp
 *
 * [342] 4的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int num) {
        return num>0 && (num == 1 ||(num%4==0 && isPowerOfFour(num/4)));
    }
};
// @lc code=end

