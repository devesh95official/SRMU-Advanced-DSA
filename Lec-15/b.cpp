// https://www.codechef.com/problems/ICECONE6

#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        //code
        {
            x -= n * y; // subtract total icecream lost
            cout << max(0, x) << endl;
        }
    }

    return 0;
}