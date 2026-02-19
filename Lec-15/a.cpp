// https://www.codechef.com/problems/RUSHTOEXAM

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n, m, a;
    cin >> n >> m >> a;

    // total hours * a >= m
    if (n * a >= m)cout << "YES\n";
    else cout << "NO\n";

    return 0;
}