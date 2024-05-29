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
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<int>prefix(n+1,0),postfix(n+1,0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i-1];
            if (s[i-1]=='1') prefix[i]++;
        }
        for (int i = n-1; i > -1; i--) {
            postfix[i] = postfix[i+1];
            if (s[i]=='0') postfix[i]++;
        }
        // debug1d(prefix,0,n+1);
        // debug1d(postfix,0,n+1);
        int best = 1e9;
        vector<double>sol;
        for (int i = 0; i <= n; i++) {
            if (prefix[i] <= i/2 && postfix[i] <= (n-i)/2) {
                sol.push_back(i);
            }
        }
        // debug1d(sol,0,sol.size());
        int res = n;
        for (int i = sol.size()-1; i > -1; i--) {
            if (abs(n - 2*sol[i]) <= abs(2*res - n)) res = sol[i];
        }
        cout << res << "\n";
    }
    return 0;
}
