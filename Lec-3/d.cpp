#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        // cnt the cakes possible, with first greater than second
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i] > b[j])cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}