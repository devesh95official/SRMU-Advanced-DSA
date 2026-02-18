// 2) REVERSE A STACK (WITHOUT RECURSION)
// Problem Statement:
// Given a stack containing N elements, reverse the stack.
// After reversal:
//     • The element at the top should move to the bottom.
//     • The element at the bottom should move to the top.
// Constraints:
//     • Recursion is NOT allowed.
//     • You may use auxiliary data structures if needed.
// Input:
// Stack with N elements.
// Output:
// Reversed stack.
// Example:
// Original Stack (top → bottom):
// 3
// 2
// 1
// Reversed Stack:
// 1
// 2
// 3
#include <bits/stdc++.h>

using namespace std;

stack<int> Reverse(stack<int> & s) {
    stack<int> ans;
    while (s.size()) {
        ans.push(s.top());
        s.pop();
    }
    return ans;
}

int main() {

    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.push(a);
    }

    stack<int> ans = Reverse(s);

    // print ans stack
    while (ans.size()) {
        cout << ans.top() << "\n";
        ans.pop();
    }

    return 0;
}