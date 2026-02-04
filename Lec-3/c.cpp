#include <bits/stdc++.h>

using namespace std;

//using map

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

        map<int, int> color;
        for (int i = 0; i < n; i++) {
            color[arr[i]]++;
        }

        int maxi = 0;
        for (auto x : color) {
            maxi = max(maxi, x.second);
        }

        int ans = 0;
        for (auto x : color) {
            if ( x.second == maxi) {
                ans = x.first;
                break;
            }
        }
        //print ans for particular case
        cout << ans << endl;

    }

    return 0;
}