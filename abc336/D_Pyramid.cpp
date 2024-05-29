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
    int l[200000] = {0};
    int r[200000] = {0};
    int v[200000] = {0};
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (v[i]>c) {
            c++;
        } else {
            c = v[i];
        }
        l[i] = c;
    }
    c = 0;
    for (int i = N-1; i > -1; i--) {
        if (v[i]>c) {
            c++;
        } else {
            c = v[i];
        }
        r[i] = c;
    }
    int best = 0;
    for (int i = 0; i < N; i++) {
        best = max(best, min(l[i], r[i]));
    }
    cout << best;
    return 0;
}
