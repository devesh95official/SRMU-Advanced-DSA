// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    // code
    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (mp[name] == 0) {
            cout << "OK\n";
            mp[name]++;
        }
        else {
            cout << name << mp[name] << endl;
            mp[name]++;
        }
    }

    return 0;
}