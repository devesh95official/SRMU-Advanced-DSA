#include <bits/stdc++.h>

using namespace std;

// sum numbers

int main() {

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        mp[a] += b; // increasing cnt of a by b in map
    }

    // print map
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}