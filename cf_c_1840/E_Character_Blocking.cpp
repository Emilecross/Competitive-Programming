#include<bits/stdc++.h>
using namespace std;

int bt;
int T;
int Q;
string s1;
string s2;

void solve() {
    vector<pair<char, int>> v1;
    vector<pair<char, int>> v2;
    cin >> s1 >> s2 >> bt >> Q;
    for (int i = 0; i < s1.length(); i++) {
        v1.emplace_back(s1[i], -1);
        v2.emplace_back(s2[i], -1);
    }
    for (int t = 0; t < Q; t++) {
        int type;
        int wo;
        int po;
        int wt;
        int pt;
        cin >> type;
        // cout << "type: " << type << '\n';
        if (type == 1) {
            cin >> po;
            v1[po - 1] = {v1[po - 1].first, t + bt};
            v2[po - 1] = {v2[po - 1].first, t + bt};
        } else if (type == 2) {
            cin >> wo >> po >> wt >> pt;
            pair<char, int> tmp;
            if (wo == 1 && wt == 1) {
                tmp = v1[po - 1];
                v1[po - 1] = v1[pt - 1];
                v1[pt - 1] = tmp;
            } else if (wo == 1 && wt == 2) {
                tmp = v1[po - 1];
                v1[po - 1] = v2[pt - 1];
                v2[pt - 1] = tmp;
            } else if (wo == 2 && wt == 1) {
                tmp = v2[po - 1];
                v2[po - 1] = v1[pt - 1];
                v1[pt - 1] = tmp;
            } else {
                tmp = v2[po - 1];
                v2[po - 1] = v2[pt - 1];
                v2[pt - 1] = tmp;
            }
        } else {
            int l1 = 0;
            int l2 = 0;
            bool eked = false;
            while (l1 < s1.length() && l2 < s2.length()) {
                while (v1[l1].second > t) l1++;
                while (v2[l2].second > t) l2++;
                // cout << v1[l1].first << " " << v2[l2].first << '\n';
                if (v1[l1].first != v2[l2].first) {
                    cout << "NO" << '\n';
                    eked = true;
                    break;
                } else {
                    l1++;
                    l2++;
                }
            }
            if (!eked) cout << "YES" << '\n';
        }
    }
}

int main() {
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}