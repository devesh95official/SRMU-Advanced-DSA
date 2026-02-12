#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>&v) {
    int n = v.size();

    // function to check if array is equal or not
    auto Check = [&](vector<int> & a) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != a[0])return false;
        }
        return true;
    };
    // array equal then yes else no
    if (Check(v)) {
        cout << "YES\n";
        return;
    }
    // check for full array
    for (int i = 0; i < n; i++) {
        vector<int> temp(n);
        for (int j = 0; j < n; j++) {
            if (j < i)temp[j] = v[j] + v[i];
            else temp[j] = v[j] - v[i];
        }
        if (Check(temp)) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        solve(v);
    }

    return 0;
}