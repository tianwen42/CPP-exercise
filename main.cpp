#include <iostream>
#include "isPowerOfTwo.h"
#include<vector>

using namespace std;

int main() {
    using namespace std;
    vector<int> testvec={-1,0,2,5,9,10,11,12};
    int target=9;
    Solution example = Solution();
    cout<<endl;
    cout<<example.isPowerOfTwo(4);

    // for (auto val : testvec){
    //     cout<<val<<" ";
    // }
    // cout <<"sas"<<endl;
    return 0;
}
