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

eke mod = 1e9+7;

eke madd(eke a, eke b) { return ((a + b) % mod + mod) % mod; }

eke msub(eke a, eke b) { return ((a - b) % mod + mod) % mod; }

int n,x;
int dp[1010][100100] = {0};
int prices[1010];
int pages[1010];

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int wt = 0; wt <= x; wt++) {
            if (wt-prices[i-1] < 0) {
                dp[i][wt] = dp[i-1][wt];
            } else {
                dp[i][wt] = max(dp[i-1][wt-prices[i-1]] + pages[i-1], dp[i-1][wt]);
            }
        }
    }
    // debug2d(dp, 1, 0, n+1, x+1);
    cout << dp[n][x];
    return 0;
}
