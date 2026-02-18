// 5) CELEBRITY PROBLEM
// Problem Statement:
// There are N people at a party numbered from 0 to N-1.
// You are given an N x N matrix M where:
// M[i][j] = 1 → Person i knows person j
// M[i][j] = 0 → Person i does NOT know person j
// A celebrity is defined as:
//     1. Everyone knows the celebrity.
//     2. The celebrity knows no one.
// Your task is to determine whether a celebrity exists.
// If a celebrity exists, return their index.
// Otherwise, return -1.
// Constraints:
//     • Time complexity should be optimized.
//     • Brute force O(N²) checking is not preferred.
// Example:
// Input:
// M = {
// {0,1,1},
// {0,0,1},
// {0,0,0}
// }
// Output:
// 2
// Explanation:
// Person 2 knows nobody.
// Everyone else knows person 2.
#include <bits/stdc++.h>

using namespace std;



int main() {
    int n = 3;
    vector<vector<int>> M = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    stack<int> st;

    //step 1 : push all persons into stack
    for (int i = 0; i < n; i++) {
        st.push(i);
    }
    //step 2 : elimination process
    while (st.size() > 1) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (M[a][b] == 1)st.push(b); // a knows b so a is not celebrity
        else st.push(a);
    }
    //step 3 : possible candidate
    int cand = st.top();

    //step 4 : verification

    for (int i = 0; i < n; i++) {
        if (i != cand) {
            //cand should not know anyone
            //everyone should know candidate
            if (M[cand][i] == 1 || M[i][cand] == 0) {
                return -1;
            }
        }
    }
    // print ans;
    cout << cand << endl;

    return 0;
}