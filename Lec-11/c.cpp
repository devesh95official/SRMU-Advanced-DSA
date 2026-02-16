// N queen Problem

#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void solve(int row, int n, vector<int>& col, vector<int>& d1, vector<int>&d2) {
    // base case
    if (row == n) {
        cnt++;
        return;
    }
    for (int c = 0; c < n; c++) {
        if (!col[c] && !d1[row + c] && !d2[row - c + n - 1]) {
            // place the queen
            col[c] = 1,d1[row + c] = 1,d2[row - c + n - 1] = 1;
            solve(row + 1, n, col, d1, d2);
            // backtrack
            col[c] = 0, d1[row + c] = 0, d2[row - c + n - 1] = 0;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> col(n, 0), d1(2 * n - 1, 0), d2(2 * n - 1, 0);
    solve(0, n, col, d1, d2);
    cout << cnt << endl;
    return 0;
}
