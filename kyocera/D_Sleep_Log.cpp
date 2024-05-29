#include <bits/stdc++.h>
using namespace std;
int n;
int s[200200];
int t[200200];
int q;
int l,r;

int main() {
    cin >> n;
    int prev = 0;
    cin >> s[1];
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (prev == 0) {
            prev = a;
            s[i] = s[i-1];
        } else {
            s[i] = s[i-1] + (a - prev);
            prev = 0;
        }
        t[i] = t[i-1] + a;
    }
    for (int i = 1; i <= n; i++) {
        cout << s[i] << ' ';
    }
    cout << '\n';
    for (int i = 1; i <= n; i++) {
        cout << t[i] << ' ';
    }
    cin >> q;
    while (q--) {
        cin >> l >> r;
        auto lower = lower_bound(t+1, t+1+n, l);
        auto upper = lower_bound(t+1, t+1+n, r);
        lower--;
        upper--;
        int idxl = distance(lower, t+1);
        int idxu = distance(upper, t+1);
        cout << "l: " << idxl << " r: " << idxu << '\n';
    }
    cout << '\n';
}