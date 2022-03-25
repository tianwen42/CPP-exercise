//
// Created by YangLin on 2022/3/25.
//

#ifndef CPP_7_整数反转_H
#define CPP_7_整数反转_H

#endif //CPP_7_整数反转_H


class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }


    //垃圾写法
    int reverse1(int x) {
        using namespace std;
        int lenth = getLenth(abs(x));
        int reverse_int = 0;
        int abs_x = abs(x);
        for (int i = lenth - 1; i >= 0; i--) {
            int n_10 = (int) pow(10, i);
            int lenth_n_10 = (int) pow(10, lenth - i - 1);
            reverse_int += abs_x / n_10 * lenth_n_10;
            abs_x %= n_10;
        }
        if (x == 0 || reverse_int > INT_MAX || reverse_int < INT_MIN) {
            return 0;
        } else if (x > 0) {
            return reverse_int;
        } else {
            return reverse_int * (-1);
        }
    }
};