// reverse a string using recursion

#include <bits/stdc++.h>

using namespace std;

void rev(string &s, int l, int r) {
    if (l >= r)return; // base case
    swap(s[l], s[r]);  // processing
    rev(s, l + 1, r - 1); // recursive case
}

int main() {

    // input
    int n;
    cin >> n;
    string s;
    cin >> s;

    // iterative two pointers
    // int l = 0, r = n - 1;
    // while (l < r) {
    //     swap(s[l], s[r]);
    //     l++, r--;
    // }

    // interative
    // for (int i = 0; i < n / 2; i++)swap(s[i], s[n - 1 - i]);

    // recursive
    rev(s, 0, n - 1);

    cout << s << endl;

    return 0;
}