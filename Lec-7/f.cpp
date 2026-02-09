
#include <bits/stdc++.h>

using namespace std;

// sum numbers for strings in a map

int main() {

    int n;
    cin >> n;
    
    // containar to store scores in
    unordered_map<string, int> mp; // O(1)
    
    for (int i = 0; i < n; i++) {
        string a;
        int b;
        cin >> a >> b;
        mp[a] += b; // increasing cnt of a by b in map
    }

    // print map
    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}