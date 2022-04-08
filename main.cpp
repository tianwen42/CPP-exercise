#include <iostream>
#include "_12.h"
#include<vector>

using namespace std;

int main() {
    using namespace std;
    vector<int> vec={-1,0,2,5,9,10,11,12};
    int target=9;
    Solution example = Solution();
    for (auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    example.reserve(vec);

    for (auto val : vec){
        cout<<val<<" ";
    }
    // cout <<"sas"<<endl;
    return 0;
}
