#include <bits/stdc++.h>
using namespace std;
char p,q;
int d[7] = {0, 3, 4, 8, 9, 14, 23};
int main() {
    cin >> p >> q;
    int pi = p - 'A';
    int qi = q - 'A';
    // cout << pi << qi;
    cout << (d[max(pi, qi)] - d[min(pi,qi)]);
    return 0;
}