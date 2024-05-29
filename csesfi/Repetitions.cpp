#include<bits/stdc++.h>
using namespace std;

int main() {
    int c = 1;
    int res = 0;
    string s;
    cin >> s;
    char prev = s[0];
    for (int i = 1; i < s.size(); i++) {
        char curr = s[i];
        if (curr != prev) {
            res = max(res, c);
            c = 1;
            prev = curr;
        } else {
            prev = curr;
            c++;
        }
    }
    res = max(res, c);
    cout << res;
    return 0;
}