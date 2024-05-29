#include <bits/stdc++.h>
using namespace std;

int grid[300][300] = {0};
int n, mv, k;

bool checkWin(int r, int c) {
    // check rows
    int row = 0;
    int prev = grid[r][0];
    for (int j = 0; j < n; j++) {
        if (grid[r][j] != prev) row = 1;
        if (grid[r][j] && grid[r][j] == prev) row++;
        if (row == k) return true;
        prev = grid[r][j];
    }
    // check col
    row = 0;
    prev = grid[0][c];
    for (int i = 0; i < n; i++) {
        if (grid[i][c] != prev) row = 1;
        if (grid[i][c] && grid[i][c] == prev) row++;
        if (row == k) return true;
        prev = grid[i][c];
    }
    // check u diagonals
    row = 0;
    for (int i = r, j = c; i >= 0 && j >= 0 && grid[i][j] == grid[r][c]; i--, j--) {
        row++;
    }
    for (int i = r, j = c; i < n && j < n && grid[i][j] == grid[r][c]; i++, j++) {
        row++;
    }
    row--;
    if (row == k) return true;
    // check l diagonals
    row = 0;
    for (int i = r, j = c; i < n && j >= 0 && grid[i][j] == grid[r][c]; i++, j--) {
        row++;
    }
    for (int i = r, j = c; i >= 0 && j < n && grid[i][j] == grid[r][c]; i--, j++) {
        row++;
    }
    row--;
    if (row == k) return true;
    return false;
}

void gp() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (grid[i][j] == 1 ? 'A' : (grid[i][j] == -1 ? 'B' : '.')) << ' ';
        }
        cout << '\n';
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n >> mv >> k;
    for (int m = 0; m < mv; m++) {
        int col;
        cin >> col;
        col--;
        int i = 0;
        while (grid[i][col]) i++;
        grid[i][col] = ((m % 2) ? -1 : 1);
        if (checkWin(i, col)) {
            // gp();
            cout << (m % 2 ? "Bunji " : "Ayumi ") << (m+1);
            return 0;
        }
    }
    // gp();
    cout << "No winner";
    return 0;
}
