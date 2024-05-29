#include <bits/stdc++.h>
using namespace std;

int s1, s2, s3;
unordered_map<int, int> seen;
unordered_map<int, int> ns;
vector<int> io;

int main() {
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1; ++i) {
        int id, num;
        cin >> id >> num;
        ns[id] = 1;
        if (seen.count(id)) {
            seen[id] += num;
        } else {
            seen[id] = num;
            io.push_back(id);
        }
    }
    for (int i = 0; i < s2; ++i) {
        int id, num;
        cin >> id >> num;
        if (ns.count(id)) ns[id]++;
        if (seen.count(id)) {
            seen[id] = min(num, seen[id]);
        }
    }
    for (int i = 0; i < s3; ++i) {
        int id, num;
        cin >> id >> num;
        if (ns.count(id)) ns[id]++;
        if (seen.count(id)) {
            seen[id] = min(num, seen[id]);
        }
    }
    int res = 0;
    for (auto id : io) {
        if (seen[id] >= 20 && ns[id] == 3) {
            res++;
        }
    }
    cout << res;
    for (auto id : io) {
        if (seen[id] >= 20 && ns[id] == 3) {
            cout << ' ' << setfill('0') << setw(6) << id;
        }
    }
    return 0;
}