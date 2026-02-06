#include <bits/stdc++.h>

using namespace std;



int main() {

    vector<int> v = {1, 2, 3};

    int n = v.size(); // size of vector

    // printed through indexes
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // for each
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // print through iterators
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}