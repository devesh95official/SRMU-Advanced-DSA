#include <bits/stdc++.h>

using namespace std;

// cnt numbers

int main() {

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        mp[a]++; // increasing cnt of a by 1 in map
    }

    // print map
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}