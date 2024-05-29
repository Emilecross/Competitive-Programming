#include <bits/stdc++.h>
using namespace std;

int t;
int x,y;

void solve() {
    cin >> x >> y;
    if ((x-y) % 2) cout << "NO";
    else cout << "YES";
    cout << '\n';
}

int main() {
	cin >> t;
    while (t--) {
        solve();
    }
	return 0;
}
