#include <bits/stdc++.h>
using namespace std;
#define eke long long
// print 2D array a from rows [i, m) and columns[j, n)
#define debug2d(a, i, j, m, n) \
    for (eke _i = i; _i < m; ++_i) { \
        for (eke _j = j; _j < n; ++_j) { \
            cout << a[_i][_j] << ' '; \
        } \
        cout << '\n'; \
    }

// print 1D array/vector a from [i, n)
#define debug1d(a, i, n) \
    for (eke _i = i; _i < n; ++_i) { \
        cout << a[_i] << ' '; \
    } \
    cout << '\n';

// print map
#define debugmap(m) \
    for (auto e: m) { \
        cout << e.first << ' ' << e.second << '\n'; \
    } \

// print iterable
#define debugiter(i) \
    for (auto e: m) { \
        cout << e << '\n'; \
    } \


void uhhsorecordingisstartedekshekesoletsgoekshekeimgoingtoshare() {
    eke excellentekshekeamiriteok;
}

int n;

eke power_two(eke pow) {
    eke res = 1;
    while (pow--) {
        res *= 2;
    }
    return res;
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n;
    if (n==1) {
        cout << 2;
        return 0;
    }
    if ((n & (n - 1)) == 0) {
        cout << n;
        return 0;
    }
    int pos = floor(log2(n));
    eke up = 2*power_two(pos);
    eke low = power_two(pos);
    pos = floor(log2(n-low));
    low += power_two(pos);
    // cout << up << ' ' << low << '\n';
    if (abs(n-low) > abs(n-up)) cout << up;
    else cout << low;
    return 0;
}

/*
{
 "compile_succeeded": true,
 "compile_info": [
  "Compilation successful",
  ""
 ],
 "cases": {
  "sub2-2": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.44 MB]"
  ],
  "sub1-0": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.41 MB]"
  ],
  "sub1-3": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.44 MB]"
  ],
  "sub2-4": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.44 MB]"
  ],
  "sub1-8": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.44 MB]"
  ],
  "sub1-7": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.44 MB]"
  ],
  "sub1+4": [
   0.0,
   "incorrect",
   "Incorrect answer",
   "[0.001 sec - 0.33 MB]"
  ],
 }
}
*/