// 1. INSERT ELEMENT AT BOTTOM OF STACK
// ============================================================
// Problem Statement:
// You are given a stack of integers supporting standard stack operations:
// push(), pop(), top(), empty().
// Your task is to insert a given integer X at the BOTTOM of the stack.
// Rules:
//     • You are NOT allowed to use recursion.
//     • You may use an auxiliary stack if required.
//     • The relative order of the other elements must remain unchanged.
// Input:
//     • A stack containing N integers.
//     • An integer X to insert.
// Output:
//     • Modified stack such that X becomes the bottom-most element.
// Example:
// Initial Stack (top → bottom):
// 3
// 2
// 1
// Insert X = 0
// Final Stack:
// 3
// 2
// 1
// 0
// Explanation:
// All elements remain in the same order; only X is inserted at the bottom.

#include <bits/stdc++.h>

using namespace std;

stack<int> Solve(stack<int> & s, int x) {
    stack<int> ans;
    while (s.size()) {
        ans.push(s.top());
        s.pop();
    }
    ans.push(x);
    while (ans.size()) {
        s.push(ans.top());
        ans.pop();
    }
    return s;
}

int main() {

    stack<int> s;
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }

    stack<int> ans = Solve(s, x);

    // print ans stack
    while (ans.size()) {
        cout << ans.top() << "\n";
        ans.pop();
    }

    return 0;
}