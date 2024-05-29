#include <bits/stdc++.h>
using namespace std;

int main() {
    int change, n, m;
    cin >> n >> m;
    int s[201];
    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        s[i] = p;
    }
    int res = 0;
    if (s[m-1] == m) {
        cout << 0;
        return 0;
    }
    int oos = s[m-1];
    s[m-1] = 0;
    res++;
    while (s[oos - 1]) {
        int newOos = s[oos - 1];
        s[oos - 1] = oos;
        oos = newOos;
        res++;
    }
    cout << res;
    return 0;
}