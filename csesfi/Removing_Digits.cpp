#include <bits/stdc++.h>
using namespace std;
#define eke long long
// print 2D array a from rows [i, m) and columns[j, n)
#define debug2d(a, i, j, m, n) \
    for (eke _i = i; _i < m; ++_i) { \
        for (eke _j = j; _j < n; ++_j) { \
            cout << a[_i][_j] << ' '; \
        } \
        cout << '\n'; \
    }

// print 1D array/vector a from [i, n)
#define debug1d(a, i, n) \
    for (eke _i = i; _i < n; ++_i) { \
        cout << a[_i] << ' '; \
    } \
    cout << '\n';

// print map
#define debugmap(m) \
    for (auto e: m) { \
        cout << e.first << ' ' << e.second << '\n'; \
    } \

// print iterable
#define debugiter(i) \
    for (auto e: m) { \
        cout << e << '\n'; \
    } \

eke mod;
eke madd(eke a, eke b) { return ((a + b) % mod + mod) % mod; }

eke msub(eke a, eke b) { return ((a - b) % mod + mod) % mod; }

int main() {
  int n;
  cin >> n;
  vector<int> dp(n+1,1e9);
  dp[0] = 0;
  for (int i = 0; i <= n; i++) {
    for (char c : to_string(i)) {
      dp[i] = min(dp[i], dp[i-(c-'0')]+1);
    }
  }
  cout << dp[n] << endl;
}