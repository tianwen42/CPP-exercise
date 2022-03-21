//
// Created by Administrator on 2022/2/27.
//
#include <iostream>
#include<math.h>

class Solution {
public:
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

    int reverse2(int x) {
        int ans = 0;
        while (x != 0) {
            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }

    int getLenth(int x) {
        int lenth = 0;
        while (x > 0) {
            x /= 10;
            lenth++;
        }
        return lenth;
    }

    int symmetryReverse(int x) {
        //对称翻转
        using namespace std;
        int ans = x;
        while (x != 0) {
            if (ans > INT_MAX || ans < INT_MIN)
                return 0;
            ans = ans * 10 + x % 10;
            // cout<<ans<<endl;
            x /= 10;
        }
        return ans;
    }


    int digitalRepeated(int x) {
        using namespace std;

        int ans = x;
        int num = 1 + (int)log10(x);  //位数
        for (int i = num - 1; i >= 0; i--) {
            if (ans == 0 || ans > INT_MAX || ans < INT_MIN)      //用for要注意0或者溢出
                return 0;
            int maxdigit = (int) pow(10, i);
            // cout<<ans<<endl;
            ans = ans * 10 + (x / maxdigit) % 10;
            x %= maxdigit;
        }
        return ans;
    }

};

int main() {
    using namespace std;
    Solution example = Solution();
    cout << example.reverse1(1534236469) << endl;
    // cout<<example.reverse2(-150) << endl;
    // cout << example.symmetryReverse(0) << endl;

    cout << example.digitalRepeated(1) << endl;
}
