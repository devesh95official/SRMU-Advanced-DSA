#include <bits/stdc++.h>

using namespace std;

// cnt chars

int main() {

    int n;
    cin >> n;

    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        mp[a]++; // increasing cnt of a by 1 in map
    }

    // print map
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}