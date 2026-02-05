// https://www.codechef.com/problems/STREAK

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        //code
        int ans = 0;
        int streak = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0)streak++;
            else streak = 0;
            // storing maximum streak throughout array
            ans = max(ans, streak);
        }

        //print ans
        cout << ans << endl;
    }

    return 0;
}