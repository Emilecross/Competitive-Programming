#include <bits/stdc++.h>
using namespace std;
int h, w;
int g[600][600];

int main() {
    cin >> h >> w;
    int mh = h;
    int mw = w;
    int mxh = 0;
    int mxw = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char c;
            cin >> c;
            g[i][j] = (c == '#');
            if (g[i][j]) {
                mh = min(mh, i);
                mxh = max(mxh, i);
                mw = min(mw, j);
                mxw = max(mxw, j);
            }
        }
    }
    for (int i = mh; i <= mxh; i++) {
        for (int j = mw; j <= mxw; j++) {
            if (!g[i][j]) {
                cout << (i+1) << ' ' << (j+1);
                return 0;
            }
        }
    }
    return -1;
}