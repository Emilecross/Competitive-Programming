#include <bits/stdc++.h>
using namespace std;

int t;
int n;
int mod = 1000000007;

void solve() {
    int a[200200] = {0};
    int even_count = 0;
    int odd_count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even_count++;
        else odd_count++;
    }
    int res = 1;
    while(even_count--) {
        res = (res*2) % mod;
    }
    if (!odd_count) res--;
    cout << int(res) << '\n';
}

int main() {
	cin >> t;
    while (t--) {
        solve();
    }
	return 0;
}
