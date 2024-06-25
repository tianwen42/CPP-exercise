//
// Created by Administrator on 2022/2/28.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        int idx = -1;
        for (int it = 0; it < strs.size(); it++) {
            std::cout << strs[it] << " ";
        }
        std::cout << std::endl;
        std::sort(strs.begin(), strs.end());
        // vector<int>::iterator it;
        for (int it = 0; it < strs.size(); it++) {
            if (strs[it] == "")
                return "";
            std::cout << strs[it] << " ";
        }
        return "";
    }
};

int main(void) {
    using namespace std;
    static Solution SA = Solution();
    vector<string> STR = {"flower", "flow", "flight", " ", "flowe"};
    cout << SA.longestCommonPrefix(STR) << endl;
    return 0;
}
