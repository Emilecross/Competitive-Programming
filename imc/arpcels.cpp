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
    // pq <-row, column>
    int columns[7] = {0};
    priority_queue<pair<int, int>>pq;
    int n,t,c;
    cin >> n;
    while (n--) {
        cin >> t >> c;
        c--;
        if (t==1) {
            int landing_height = columns[c];
            landing_height++;
            pq.emplace(landing_height, c);
            landing_height++;
            pq.emplace(landing_height, c);
            columns[c] = landing_height;
        } else {
            int landing_height = max(columns[c], columns[c+1]);
            landing_height++;
            pq.emplace(landing_height, c);
            pq.emplace(landing_height, c+1);
            columns[c] = landing_height;
            columns[c+1] = landing_height;
        }
    }
    while (pq.size()) {
        int curr_row = pq.top().first;
        string s = "-------";
        while (pq.size() && pq.top().first == curr_row) {
            s[pq.top().second] = '*';
            pq.pop();
        }
        cout << s << "\n";
    }
    return 0;
}
