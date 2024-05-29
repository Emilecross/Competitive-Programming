#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll T;
ll N;
ll x, xx, y, yy;

int belt(ll x, ll y) {
    ll allowed;
    ll off_y;
    if (x > N/2 && y > N/2) {
    /* ##
       #X */
        allowed = (x - N/2 - 1);
        off_y = (y - N/2 - 1);
    } else if (x > N/2 && y <= N/2) {
    /* #X
       ## */
        allowed = (x - N/2 - 1);
        off_y = (N/2 - y);
    } else if (x <= N/2 && y <= N/2) {
    /* X#
       ## */
        allowed = (N/2 - x);
        off_y = (N/2 - y);
    } else {
    /* ##
       X# */
        allowed = (N/2 - x);
        off_y = (y - N/2 - 1);
    }
    return allowed + max(off_y - allowed, (long long) 0);
}

int solve() {
    cin >> N >> x >> y >> xx >> yy;
    cout << abs(belt(x, y) - belt(xx, yy));
    return 0;
}

int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
        cout << '\n';
    }
}