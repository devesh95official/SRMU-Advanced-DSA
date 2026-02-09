// set in STL
#include <bits/stdc++.h>

using namespace std;

// features
// unique elements
// sorted form

int main() {

    set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a); // to insert an element
        // O(log(n)) in this case
        // O(1) in unordered case
    }

    // if no sorted
    // unordered_set<int> s;
    // if no unique
    // multiset<int> s;
    
    // to count elements in set , we use s.count(x);
    // return a int representing the cnt of x;
    

    // print
    for (auto x : s) {
        cout << x << " ";
    }

    return 0;
}
