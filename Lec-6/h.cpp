#include <bits/stdc++.h>

using namespace std;



int main() {

    // map in containors

    map <int, int> mp;
    //key values pairs are stored in it
    mp.insert({1, 3});

    // assign values in map
    mp[2] = 10;
    mp[10] = 2;
    mp[50] = 100;


    // delete first key value pair
    mp.erase(mp.begin());
    // delete last
    mp.erase(--mp.end());

    // by default sorted wrt keys
    // unique keys
    // no unique keys then use multimap<int,int>
    // no sorting then use unordered_map<int,int>

    for (auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}