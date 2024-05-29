#include <bits/stdc++.h>
using namespace std;

int t;
int n,x;

void solve() {
    cin >> n >> x;
    if (n > x) cout << "NO";
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
