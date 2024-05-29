#include<bits/stdc++.h>
using namespace std;

long long n;
 
int main() {
    cin >> n;
    long long sum = n*(n+1)/2;
    n--;
    while (n--) {
        long long num;
        cin >> num;
        sum -= num;
    }
    cout << sum;
    return 0;
}