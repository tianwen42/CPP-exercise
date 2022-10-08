#include <iostream>
#include <time.h>

using namespace std;

void start(int *A, int n);
void QuickSort(int *A, int low, int high);
int Partition(int *A, int low, int high);

int main(void)
{
    const int n = 9;
    int A[9] = {2, 3, 4, 5, 1, 6, 7, 8, 9};

    cout << "QuickSort" << endl;
    cout << "Before: ";
    for (auto const &value : A)
        cout << value << ' ';
    cout << endl;
    // to do
    time_t begin_t = clock();
    start(A, 9);
    time_t finish_t = clock();

    cout << "it cost " << (double)(finish_t - begin_t) / CLOCKS_PER_SEC << " s" << endl;

    cout << "After: ";
    for (auto const &value : A)
        cout << value << ' ';
    cout << endl;
    return 0;
}

void start(int *A, int n)
{
    QuickSort(A, 0, n);
}

/*  QuickSort
    平均复杂度:NlogN
    最优复杂度:NlogN
    最差复杂度:N^2
    空间复杂度:1
    稳定性：不稳定
*/
void QuickSort(int *A, int low, int high)
{
    if (low > high)
        return;
    int mid = Partition(A, low, high);
    QuickSort(A, low, mid - 1);  //左边
    QuickSort(A, mid + 1, high); //右边
}

int Partition(int *A, int low, int high)
{ //
    int pivot = A[low];
    while (low < high) {
        while (low < high && A[high] >= pivot)
            high--;
        A[low] = A[high];
        while (low < high && A[low] <= pivot)
            low++;
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}
