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
    int t,m,n;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<eke>a(n,0),b(n,0),cumb(n+1,0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        eke sum = 0;
        eke best = 1e15;
        for (int i = m-1; i > -1; i--) {
            best = min(best, sum+a[i]);
            sum += b[i];
        }
        eke res = 0;
        for (int i = n-1; i > -1; i--) {
            if (i+1 < m) break;
            if (i+1 == m) {
                res += best;
            } else {
                res += min(a[i], b[i]);
            }
        }
        cout << res << "\n";
    }
    return 0;
}