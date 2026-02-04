// smaller and easier solution for Sorting Prefixes
// https://www.codechef.com/problems/SORTPREF?tab=statement

#include <bits/stdc++.h>

using namespace std;



int main() {

    // input testcases
    int t;
    cin >> t;
    // t testcases running
    while (t--) {
        // size of array n taken as input
        int n;
        cin >> n;
        // input the array a
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != i + 1) {
                ans = a[i];
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}