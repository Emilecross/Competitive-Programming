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


void uhhsorecordingisstartedekshekesoletsgoekshekeimgoingtoshare() {
    eke excellentekshekeamiriteok;
}

int n,x;
int dp[1000200];

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int mod = 1e9 + 7;
    cin >> n >> x;
    vector<eke> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    dp[0] = 1;
    for (int amt = 1; amt <= x; amt++) {
        for (auto coin : coins) {
            if (amt < coin) continue;
            dp[amt] = (dp[amt] + dp[amt - coin]) % mod;
        }
    }
    cout << dp[x];
    return 0;
}
