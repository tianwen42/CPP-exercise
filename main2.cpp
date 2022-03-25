#include <iostream>
#include "_十转二进制.h"

int main() {
    using namespace std;
    for(int i=0; i<10; i++){
        cout<<"i="<<i<<" ";
        cout<<Solutions::intTobinaries(i)<<endl;
    }

    return 0;
}
