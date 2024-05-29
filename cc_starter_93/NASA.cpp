#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> palindromes;

void solve() {
    int a[100100];
    map<int, int> seen;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (seen.count(a[i])) {
            seen[a[i]]++;
        } else {
            seen[a[i]] = 1;
        }
    }
    sort(a, a+n);
    int res = 0;
    int prev = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == prev) {
            continue;
        }
        prev = a[i];
        for (auto p : palindromes) {
            int target = a[i] ^ p;
            if (target < a[i]) continue;
            if (seen.count(target)) {
                // cout << "num: "<< a[i] << " t: " << target << '\n';
                if (a[i] == target) {
                    res += max((seen[target] * (seen[target] - 1)) + 1, 1);
                } else {
                    res += (seen[target] * seen[a[i]]);
                }
            }
        }
    }
    cout << res << '\n';
}

bool isPalindrome(int n) {
    string str = to_string(n);
    int len = str.length();
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}

int main() {
    for(int i = 0; i < int(pow(2,15)); i++) {
        if(isPalindrome(i)) palindromes.push_back(i);
    }
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
