//
// Created by YangLin on 2022/4/17.
//

#ifndef CPP_ISPOWEROFTWO_H
#define CPP_ISPOWEROFTWO_H

#endif //CPP_ISPOWEROFTWO_H
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && ((n & (n-1)) == 0);
        //2的次方都是2>10，4>100，8>1000
        //n-1的次方都是末尾为1>01,3>11,7>111
        //取位之后为0
    }
};