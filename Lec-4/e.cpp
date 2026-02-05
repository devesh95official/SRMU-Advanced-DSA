// STL

// standard template library

// vector & iterators

#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin >> n;
    vector<int> v(n); // init the size of vector
    // v = {1,2,3,4,5}
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // access element as x of vector v
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // iterators
    // not an index
    cout << *v.begin() << endl;
    //print last element
    cout << *v.rbegin() << endl;
    
    // you have to revise all stl containors
    // vectors
    // deques
    // sets , unordered_sets
    // maps , unordered maps
    // multiset, multimap
    // stacks, queues
    // priority queues

    return 0;
}