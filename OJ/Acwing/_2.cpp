#include "iostream"
using namespace std;

const int N = 1000;
int n, m;
int v[N], w[N];
int f[N][N];

int main(int argc, char **argv)
{

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << w[i] << endl;
    }
    // cout << v[i] << w[i] << endl;
}