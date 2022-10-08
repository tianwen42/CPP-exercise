// 大数相加
// Sample Input
// 2
// 1 2
// 112233445566778899 998877665544332211

// Sample Output
// Case 1:
// 1 + 2 = 3

// Case 2:
// 112233445566778899 + 998877665544332211 = 1111111111111111110
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a, b;
    int counter, times;
    cin >> times;
    for (counter = 1; counter <= times; counter++) {
        //输入两个数字并求和
        cin >> a >> b;

        cout << "Case " << counter << ':' << endl;
        cout << a << " + " << b << " = " << Add(a, b) << endl;

        if (counter != times) {
            cout << endl;
        }
    }
    return 0;
}

char *Add(int a, int b) { char *result = ""; }
