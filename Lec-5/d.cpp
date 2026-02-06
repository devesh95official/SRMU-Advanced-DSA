// https://www.codechef.com/problems/ACMDT

#include <bits/stdc++.h>

using namespace std;



int main() {

    //input
    int t;
    cin >> t;

    while (t--) {
        long long b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        long long ans = 0;
        if (x + y > n) {
            cout << "-1\n";
            continue;
        }
        
        long long mini = (b + g + n - 1) / n;
        long long boys = b / x;
        long long girls = g / y;
        long long maxi = min(boys, girls);

        if (mini <= maxi) {
            cout << mini << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}