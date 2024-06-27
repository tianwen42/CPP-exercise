/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

// @lc code=start
#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        // if (strs.size() == 1 && strs[0] == "") {
        //     res.push_back({""});
        //     return res;
        // }
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            mp[key].emplace_back(str);
        }
        for (const auto& pair : mp) {
            sort(mp[pair.first].begin(), mp[pair.first].end());
            res.push_back(pair.second);
        }

        return res;
    }
};
// @lc code=end
