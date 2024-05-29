#include<bits/stdc++.h>
using namespace std;

int T;
int N;
int K;

void solve() {
    cin >> N >> K;
    K = min(K, 30);
    int ans = min(int(pow(2, K)), N+1);
    cout << ans;
    cout << '\n';
}

int main() {
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}