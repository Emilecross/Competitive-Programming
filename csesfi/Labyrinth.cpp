#include <bits/stdc++.h>
using namespace std;
#define eke long long

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m;
    int ar,ac;
    int br,bc;
    cin >> n >> m;
    vector<vector<char>>grid;
    for (int i = 0; i < n; i++) {
        vector<char>append;
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            append.push_back(c);
            if (c=='A') { ar = i; ac = j;}
            if (c=='B') { br = i; bc = j;}
        }
        grid.push_back(append);
    }

    queue<pair<pair<int,int>,string>>bfs;
    bfs.push({{ar,ac},""});
    grid[ar][ac] = '#';

    vector<pair<int,int>>dirs = {{0,-1},{0,1},{1,0},{-1,0}};
    vector<string>dir = {"L","R","D","U"};

    while (bfs.size()) {
        int sz = bfs.size();
        for (int i = 0; i < sz; i++) {
            pair<int, int> point = bfs.front().first;
            string path = bfs.front().second;
            bfs.pop();
            if (point.first == br && point.second == bc) {
                cout << "YES\n" << path.size() << "\n" << path << "\n";return 0;
            }
            for (int j = 0; j < 4; j++) {
                auto d = dirs[j];
                string dd = dir[j];
                int newR = point.first + d.first;
                int newC = point.second + d.second;
                if (newR >= 0 && newR < n
                && newC >= 0 && newC < m 
                && grid[newR][newC] != '#') {
                    grid[newR][newC] = '#';
                    bfs.push({{newR,newC},path+dd});
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}
