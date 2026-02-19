// https://www.codechef.com/problems/MAXMIN6

#include <bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // collect all values
        vector<pair<int, int>> vals;
        for (int i = 0; i < n; i++) {
            int v1 = v[i];
            if (v1 == 0) {
                vals.push_back({0, i});
                continue;
            }
            while (v1 < 1e9) {
                vals.push_back({v1, i});
                v1 <<= 1;
            }
        }
        sort(vals.begin(), vals.end()); //sort by value

        //sliding window
        vector<int> cnt(n, 0);
        int have = 0;
        int l = 0;
        int ans = 1e18;
        for (int i = 0; i < vals.size(); i++) {
            int idx = vals[i].second;
            if (cnt[idx] == 0)have++;
            cnt[idx]++;
            while (have == n && l <= i) {
                ans = min(ans, vals[i].first - vals[l].first);
                int lidx = vals[l].second;
                --cnt[lidx];
                if (cnt[lidx] == 0)--have;
                ++l;
            }
        }
        if (ans == 1e18)ans = 0;
        cout << ans << endl;
    }

    return 0;
}