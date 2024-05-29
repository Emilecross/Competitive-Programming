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
    int n;
    cin >> n;
    vector<eke> maxes, nums;
    eke mxm = 0, score = 0;
    for (int i = 0; i < n; i++) {
        eke x;
        cin >> x;
        mxm = max(mxm, x+1);
        nums.push_back(x);
        maxes.push_back(mxm);
        // score += max(mxm-x-1, 0);
    }
    for (int i = n-1; i > 0; i--) {
        if (maxes[i-1] < maxes[i]-1) maxes[i-1] = maxes[i]-1;
    }
    for (int i = 0; i < n; i++) {
        if (maxes[i]-nums[i]-1>0) score += maxes[i]-nums[i]-1;
    }
    cout << score;
    return 0;
}
