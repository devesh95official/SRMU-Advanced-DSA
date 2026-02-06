//https://www.codechef.com/problems/AABBCCDD
#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // convert lower case
        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }

        // store counts in an array
        // sort that array
        // arr[n-1] + arr[n-2]
        int arr[26];
        for (int i = 0; i < 26; i++) {
            arr[i] = 0;
        }
        // cnt each char
        for (int i = 0; i < n; i++) {
            arr[s[i] - 'a']++;
        }
        // sort arr
        sort(arr, arr + 26);
        cout << arr[25] + arr[24] << endl;
    }

    return 0;
}