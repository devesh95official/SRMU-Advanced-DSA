// https://codeforces.com/problemset/problem/2/A

#include <bits/stdc++.h>

using namespace std;



int main() {
    // input n , the size of rounds
    int n;
    cin >> n;
    // store the rounds data {name,score} in a vector
    vector<pair<string, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    // sum of each individual score
    map<string , int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i].first] += v[i].second;
    }

    // find maximum score
    int maxi = INT_MIN;
    for (auto x : mp)maxi = max(maxi, x.second);

    // store winners name
    set<string> winners;
    for (auto x : mp) {
        if (x.second == maxi)winners.insert(x.first);
    }

    // clear the map for reuse
    mp.clear();
    // again see if anyone reached the maximum score,
    // who reached first wins
    for (int i = 0; i < n; i++) {
        mp[v[i].first] += v[i].second;
        if (mp[v[i].first] >= maxi && winners.count(v[i].first)) {
            cout << v[i].first << endl;
            return 0;
        }
    }

    return 0;
}