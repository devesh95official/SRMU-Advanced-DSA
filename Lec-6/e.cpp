//deque

#include <bits/stdc++.h>

using namespace std;



int main() {

    deque<int> v = {1, 2, 3};

    int n = v.size(); // size of vector

    //push element at end O(1)
    v.push_back(5);
    v.push_back(4);
    v.pop_back(); // pop out las element O(1)

    // erase element of index 1
    v.erase(v.begin() + 1); // O(n)

    v.push_back(5);
    v.push_back(4);

    sort(v.begin(), v.end()); // sort the vector

    reverse(v.begin(), v.end()); // reverse the vector
    reverse(v.begin(), v.end());

    // u can also use lower bound and upper bounds,
    // remember the the array should be sorted in that case!!
    cout << *(lower_bound(v.begin(), v.end(), 2)) << endl; // equal or just bigger
    cout << *(upper_bound(v.begin(), v.end(), 2)) << endl; // just bigger
    cout << *(upper_bound(v.begin(), v.end(), 4)) << endl;
    // // printed through indexes
    // for (int i = 0; i < n; i++) {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // for each
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;


    // remove from front (O(1)) // extra
    v.pop_front();
    v.push_front(5);


    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;


    // // print through iterators
    // for (auto it = v.begin(); it != v.end(); it++) {
    //     cout << *it << " ";
    // }

    return 0;
}