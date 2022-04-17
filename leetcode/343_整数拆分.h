//
// Created by Administrator on 2022/3/3.
//

#ifndef CPP__3_H
#define CPP__3_H

#include <vector>
#include <iostream>

using namespace std;
#endif //CPP__3_H

class Solution {
public:
    int integerBreak(int n) {
        if (n == 2)
            return 1;
        vector<int> dp(n + 1, 0);

        dp[2] = 1;
        for (int i = 3; i <= n; ++i) {
            print(dp);
            for (int j = 1; j < i; ++j)
                dp[i] = max(dp[i], max(dp[i - j] * j, (i - j) * j));
        }
        return dp[n];
    }
};