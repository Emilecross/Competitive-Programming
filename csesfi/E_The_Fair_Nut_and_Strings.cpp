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
    eke c = 0, s1 = 0, s2 = 0;
    eke n;
    eke k, kk;
    cin >> n;
    cin >> kk;
    string s;
    cin >> s;
    k = 1;
    c += pow(2, s.size()) - 2;
    cout << c  << '\n';
    for (int i = s.size()-1; i > -1; i--) {
        if (s[i] == 'b') s1 += k;
        k *= 2;
    }
    cout << s1 << '\n';
    cin >> s;
    k = 1;
    for (int i = s.size()-1; i > -1; i--) {
        if (s[i] == 'b') s2 += k;
        k *= 2;
    }
    cout << s2 << '\n';
    c += min(k, s2-s1+1);
    cout << c;
    return 0;
}
