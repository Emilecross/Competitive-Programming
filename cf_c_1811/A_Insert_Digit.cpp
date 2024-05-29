#include <bits/stdc++.h>
using namespace std;

int T;
int N;
int D;
string num;

string solve() {
    cin >> N >> D >> num;
    int i = 0;
    while (i < N && (num[i] - '0' >= D)) {
        i++;
    }
    if (i == N) return (num + to_string(D));
    return (num.substr(0, i) + to_string(D) + num.substr(i, num.size() - i));
}

int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        cout << solve() << '\n';
    }
}