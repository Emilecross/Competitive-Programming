#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> t1;
    vector<int> t2;
    int res = 0;
    for (int i = 0; i < 5; ++i) {
        int h;
        cin >> h;
        t1.push_back(h);
    }
    for (int i = 0; i < 5; ++i) {
        int h;
        cin >> h;
        t2.push_back(h);
    }
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    for (int i = 0; i < 5; ++i) {
        if (t1[i] > t2[i]) res++;
    }
    cout << res;
}