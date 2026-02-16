// N queen Problem ultra optimized version (bitmasking)

#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void solve(int n, int row, int cols, int d1, int d2) {
    // base case
    if (row == n) {
        cnt++;
        return;
    }
    // all positions available int this row
    int available = ((1 << n) - 1) & ~(cols | d1 | d2);

    while (available) {
        //pick rightmost available position
        int bit = available & -available;
        // remove that bit from available
        available -= bit;
        solve(n, row + 1,
              cols | bit, //mark column
              (d1 | bit) << 1, //shift left diagonal
              (d2 | bit) >> 1 //sift right diagonal
             );
    }
}

int main() {
    int n;
    cin >> n;
    solve(n, 0, 0, 0, 0);
    cout << cnt << endl;
    return 0;
}
