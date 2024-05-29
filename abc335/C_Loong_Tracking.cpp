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
    vector<pair<int, int>> dirs = {{1,0}, {0, -1}, {-1, 0}, {0, 1}};
    int x,y;
    x = y = 0;
    int idx = 0;
    for (int i = 1; i < n**2; i++) {
        arr[y][x] = i;
        if (y + dirs[idx].second < 0 || y + dirs[idx].second == n || x + dirs[idx].first < 0 || x + dirs[idx].first == n) idx++;
        y += dirs[idx].second;
        x += dirs[idx].first;
    }
    return 0;
}
