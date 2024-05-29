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
    int t,n,k,q;
    cin >> t;
    while (t--) {
        cin >> n >> k >> q;
        vector<eke>A(k,0);
        vector<eke>B(k,0);
        for (int i = 0; i < k; i++) cin >> A[i];
        for (int i = 0; i < k; i++) cin >> B[i];
        while (q--) {
            int d;
            cin >> d;
            int l = 0, r = k-1;
            while (l != r) {
                int m = (l+r+1)/2;
                if (A[m] <= d) l = m;
                else r = m-1;
            }
            if (A[l] > d) cout << (B[l])*(d)/(A[l]) << " ";
            else cout << B[l] + (B[l+1]-B[l])*(d-A[l])/(A[l+1]-A[l]) << " ";
        }
        cout << "\n";
    }
    return 0;
}
