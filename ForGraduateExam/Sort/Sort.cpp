#include <iostream>

using namespace std;

/*Select_sort
平均复杂度:n^2
最优复杂度:n^2
最差复杂度:n^2
空间复杂度:1
稳定性：不稳定
*/

int main(void) {
    const int n = 9;
    int array[9] = {2, 3, 4, 5, 1, 6, 7, 8, 9};
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i; j < n; j++) {
            if (array[j] < array[i]) {
                min = j;
            }
        }
        //交换
        int tmp = array[min];
        array[min] = array[i];
        array[i] = tmp;
    }
    for (auto const &value : array)
        cout << value << ' ';
    cout << endl;
    return 0;
}