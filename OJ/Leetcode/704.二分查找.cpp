/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    // 定义target在左闭右开的区间里，即：[left, right]
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
        return -1;
    }

    // 定义target在左闭右开的区间里，即：[left, right)
    int search2(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size(); // 定义target在左闭右开的区间里，即：[left, right)
        while (left < right) { // 因为left == right的时候，在[left, right)是无效的空间，所以使用 <
            int middle = left + ((right - left) >> 1);
            if (nums[middle] > target) {
                right = middle; // target 在左区间，在[left, middle)中
            } else if (nums[middle] < target) {
                left = middle + 1; // target 在右区间，在[middle + 1, right)中
            } else { // nums[middle] == target
                return middle; // 数组中找到目标值，直接返回下标
            }
        }
        // 未找到目标值
        return -1;
    }

};
// @lc code=end

