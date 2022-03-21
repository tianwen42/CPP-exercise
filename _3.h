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

    int mytest(){
        int arr[]={1,3,6,2,7};
        vector<int> dp={3,2,1,4,5,0};
        for(int i=0; i<dp.size()-1; i++){
            dp[dp.size()-1]=max(dp[i],dp[i+1]);
        }
        // for (int i = 3; i <= n; ++i) {
        //     print(dp);
        //     for (int j = 1; j < i; ++j)
        //         dp[i] = max(dp[i], max(dp[i - j] * j, (i - j) * j));
        // }
        print(dp);
        cout <<"arr: ";
        print(arr,5);
        return 0;
    }

    static void swap(int arr[], int i, int j) {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    static void print(vector<int> vec) {
        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    static void print(int arr[],int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};