#include <bits/stdc++.h>
using namespace std;

int T;
int N;
int num;

void solve() {
    cin >> N;
    int prevMax = -1;
    vector<int>nums;
    int res[1000006];
    for (int i = 0; i < N - 1; i++) {
        cin >> num;
        res[i] = 0;
        nums.push_back(num);
    }
    res[0] = nums[0];
    res[1] = nums[0];
    for (int i = 1; i < N - 1; i++) {
        if (nums[i] < res[i]) {
            res[i] = nums[i];
        }
        res[i+1] = nums[i];
    }
    for (int i = 0; i < N; i++) {
        cout << res[i];
        if (i != N) cout << ' ';
    }
}

int main() {
    cin >> T;
    for (int i = 0; i < T; i++) {
        solve();
        cout << '\n';
    }
}