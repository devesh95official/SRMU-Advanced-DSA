// https://www.codechef.com/problems/MINDIS6

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // map to store cnt for each element
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        for (auto x : mp)cout << x.first << " " << x.second << endl;
            cout<<endl;
        // a stores cnt of each element in sorted order
        vector<pair<int, int>> a;
        for (auto x : mp) {
            a.push_back({x.second, x.first});
        }

        sort(a.begin(), a.end()); // we have the cnt array
        for (auto x : a)cout << x.first << " " << x.second << endl;
        // minimum cnt element on top

        int ans = a.size();
        for (int i = 0; i < a.size(); i++) {
            if (a[i].second == v[0])continue;
            if (a[i].first <= k)k -= a[i].first, ans--;
            else break;
        }

        //print cnt of unique elements left
        cout << ans << endl;
    }

    return 0;
}