#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
  unordered_map<long long, long long> map;

public:
  long long numWays(int n) {

    if (n == 0) {
      return 1;
    }
    if (n <= 2) {
      return n;
    }
    if (map.count(n) != 0) {
      return map[n];
    } else {
      map[n] = numWays(n - 1) + numWays(n - 2);
      return numWays(n);
    }
  }
};

int main() {
  Solution tool = Solution();
  cout << "HASH  " << tool.numWays(50) << endl;
  // cout << Solution().numWays(2);
  cout << LLONG_MAX << endl;

  return 0;
}
