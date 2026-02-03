// palindrome check

#include <bits/stdc++.h>

using namespace std;

bool check(string &s, int l, int r) {
    if (l >= r)return true; // base case
    if (s[l] != s[r])return false; // processing
    check(s, l + 1, r - 1); // recursive case
}

int main() {

    // input
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (check(s, 0, n - 1))cout << "Palindrome!!";
    else cout << "Not a Palindrome";

    return 0;
}