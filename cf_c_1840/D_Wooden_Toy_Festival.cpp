#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define eke int

// print 2D array a from rows [i, m) and columns[j, n)
#define debug2d(a, i, j, m, n) \
    for (eke _i = i; _i < m; ++_i) { \
        for (eke _j = j; _j < n; ++_j) { \
            cout << a[_i][_j] << " "; \
        } \
        cout << "\n"; \
    }

// print 1D array/vector a from [i, n)
#define debug1d(a, i, n) \
    for (eke _i = i; _i < n; ++_i) { \
        cout << a[_i] << " "; \
    } \
    cout << "\n";

// print map
#define debugmap(m) \
    for (auto e: m) { \
        cout << e.first << " " << e.second << "\n"; \
    } \

// print iterable
#define debugiter(i) \
    for (auto e: m) { \
        cout << e << "\n"; \
    } \




eke n;
eke a[200200];

bool can(int z) {
    // cout << z << "\n";
    if (z >= a[n-1]) return true;

    eke lo = a[0] + z;
    eke hi = a[n-1] - z;
    // cout << lo << "\n";
    // cout << hi << "\n";
    vector<eke> v;
    for (int i = 0; i < n; ++i) {
        if (abs(a[i]-lo) > z && abs(a[i]-hi) > z) {
            v.push_back(a[i]);
        }
    }
    // debug1d(v, 0, v.size());
    if (!v.size()) return true;
    // cout << (v.begin() +prev(v.end())) << "\n";
    return abs((v[0] + v[v.size()-1]) / 2 - v[0]) <= z;
}

// find largest z in [lo, hi] that can(z) is true
int binarysearch(int lo, int hi) {
    int best = -1;

    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (can(mid)) {
            best = mid;
            hi = mid - 1;

        } else {
            lo = mid + 1;
        }
    }

    return best;
}


eke main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    eke t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a+n);
        cout << binarysearch(0, 1E9+10) << "\n";
        // cout << can(12) << "\n";
    }

    return 0;
}