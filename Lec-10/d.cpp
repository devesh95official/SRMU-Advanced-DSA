// easy https://www.codechef.com/problems/PSAS

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] = abs(v[i]); // if element is negetive then  make it +ve
        }
        bool f = false;
        for (int i = 0; i < n; i++) {
            if (v[i] != v[0]) {
                cout << "NO\n";
                f = true;
                break;
            }
        }
        if (f == false)cout << "YES\n";
    }
    return 0;
}