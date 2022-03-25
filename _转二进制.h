//
// Created by Administrator on 2022/2/28.
//

#ifndef CPP__2_H
#define CPP__2_H
# include<math.h>
#endif //CPP__2_H

class Solution {
public:
    int counting1(int x) {
        //计位数
        using namespace std;
        cout << x << endl;
        int n = 0;
        while (x) {
            x /= 10;
            n++;
        }
        return n;
    }

    int counting2(int x) {
        //记位数
        using namespace std;
        cout << x << endl;
        int n = 0;
        while (x) {
            if (x < 10) {
                n++;
            } else {
                n += 2;
            }
            x /= 100;
        }
        return n;
    }

    int counting3(int x) {
        //记位数
        using namespace std;
        cout << x << endl;
        int n = 1 + (int)log10(x);;
        return n;
    }
};