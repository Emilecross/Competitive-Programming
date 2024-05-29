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


int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t,n,x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int>a(n,0);
        int ix;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == x) ix = i;
        }
        int l = 0;
        int r = n;
        while (1) {
            if (r-l==1) break;
            int m = (l+r)/2;
            if (a[m] <= x) {
                l = m;
            } else {
                r = m;
            }
        }
        if (a[l] == x) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n" << ix << " " << l << "\n";
        }
    }
    return 0;
}
