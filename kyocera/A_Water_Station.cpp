#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    cin >> n;
    int lower = n/5*5;
    int upper = (n/5+1)*5;
    if (upper - n < n - lower) {
        cout << upper;
        return 0;
    }
    cout << lower;
    return 0;
}