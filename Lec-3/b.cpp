#include <bits/stdc++.h>

using namespace std;



int main() {
    // input number of testcases
    int t;
    cin >> t;
    // run t times , processes all testcases
    while (t--) {
        // single case
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int color[101];
        for (int i = 0; i < 101; i++) {
            color[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            color[arr[i]]++; // increasing color of candie by 1
        }
        // calculate maximum cnt
        int maxi = 0;
        for (int i = 0; i < 101; i++) {
            maxi = max(maxi, color[i]);
        }
        int ans = 0;
        for (int i = 0; i < 101; i++) {
            if (color[i] == maxi) {
                ans = i;
                break;
            }
        }
        //print ans for particular case
        cout << ans << endl;

    }

    return 0;
}