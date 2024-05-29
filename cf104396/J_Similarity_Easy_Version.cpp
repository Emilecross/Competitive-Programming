#include <bits/stdc++.h>
using namespace std;

string s1;
string s2;
int m;
int dp[55][55];

int findLCS(string s1, string s2) {
    int res = 0;
    for (int i = 0; i < s1.length() + 1; ++i) {
        for (int j = 0; j<s2.length() + 1; ++j) {
            if (i*j == 0) {
                dp[i][j] = 0;
                continue;
            }
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                res = max(res, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return res;
}

int solve() {
    int N;
    int res = 0;
    string s[55];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            memset(dp, 0, sizeof(dp));
            res = max(res, findLCS(s[i], s[j]));
        }
    }
    return res;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cout << solve() << '\n';
    }
}
