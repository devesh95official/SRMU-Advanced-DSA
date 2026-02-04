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
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // b array stoes minimum till each index
        b[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            b[i] = min(b[i + 1], a[i]);
        }
        // c array stores maximum till each index
        int maxi = a[0];
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, a[i]);
            c[i] = maxi;
        }
        // by default ans is last maximum element
        int ans = c[n - 1];
        // if array sorted than ans is 0;
        if (is_sorted(a.begin(), a.end()))ans = 0;
        // identifing the sorted part of the array
        int k = n - 1;
        while (k >= 1 && a[k] >= a[k - 1] && c[k - 1] <= b[k]) {
            k--;
        }
        //check if current a[k] is minimum than ans;
        ans = min(ans, a[n - 1]);
        if (k + 1 < n)ans = min(ans, a[k]);
        cout << ans << endl;
    }

    return 0;
}