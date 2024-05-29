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

int bs(int rad, int x) {
    int l = 0, r = rad-1;
    while (l != r) {
        int m = (l+r+1)/2;
        if (rad*rad - x*x >= m*m) r = m-1;
        else l = m;
    }
    return l+1;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t,r;
    cin >> t;
    while(t--) {
        // int ans = 0;
        // cin >> r;
        // for (int i = 0; i <= r+1; i++) {
        //     int a = bs(r, i);
        //     int b = bs(r+1, i);
        //     cout << i << ' ' << a << ' ' << b << '\n';
        //     ans += (b - a);
        // }
        // cout << ans*4 << "\n";
        int ans = 0;
        cin >> r;
        for (int i = 0; i < r; i++) {
            int a = bs(r, i);
            ans += -a;
        }
        cout << ans << "\n";
        for (int i = 0; i < r+1; i++) {
            int a = bs(r+1, i);
            cout << i << ' ' << a << '\n';
            ans += a;
        }
        cout << ans << "\n";
    }
    return 0;
}
