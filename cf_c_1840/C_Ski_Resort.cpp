#include<bits/stdc++.h>
using namespace std;

int T;
#define ll long long
ll N, K, Q;

void solve() {
    ll temp[200200] = {0};
    cin >> N >> K >> Q;
    for (int i = 0; i < N; i++) {
        cin >> temp[i];
    }
    ll c = 0;
    ll res = 0;
    for (int i = 0; i < N; i++) {
        if (temp[i] > Q) {
            if (c >= K) res += ((c - K + 1)*(c - K + 2)/2);
            c = 0;
            continue;
        }
        c++;
    }
    if (c >= K) res += ((c - K + 1)*(c - K + 2)/2);
    cout << res << '\n';
}

int main() {
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}