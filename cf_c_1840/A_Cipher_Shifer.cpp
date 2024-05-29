#include<bits/stdc++.h>
using namespace std;

char eke[111];
int T;
int N;

void solve() {
    cin >> N;
    bool set = false;
    char mine;
    for (int i = 0; i < N; i++) {
        cin >> eke[i];
    }
    for (int i = 0; i < N; i++) {
        if (set) {
            if (eke[i] == mine) {
                cout << eke[i];
                set = false;
            }
        } else {
            mine = eke[i];
            set = true;
        }
    }
    cout << '\n';
}

int main() {
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}