#include <bits/stdc++.h>
using namespace std;

int t;
int n,x;

void solve() {
    cin >> n >> x;
    if ((n*x) > 9999 && (n*x) <= 99999) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main() {
	cin >> t;
    while (t--) {
        solve();
    }
	return 0;
}
