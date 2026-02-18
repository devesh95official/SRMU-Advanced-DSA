// 4) STOCK SPAN PROBLEM
// Problem Statement:
// You are given an array price[] of size N, where price[i] represents
// the stock price on the i-th day.
// For each day i, compute the span of the stock price.
// Span Definition:
// The span of the stock’s price on day i is the maximum number of
// consecutive days (including day i) for which the stock price was
// less than or equal to price[i].
// In simpler terms:
// Count how many consecutive previous days (including today)
// have prices less than or equal to today’s price.
// Input:
// Array price[] of size N.
// Output:
// Array span[] of size N.
// Example:
// Input:
// price = {100, 80, 60, 70, 60, 75, 85}
// Output:
// span = {1, 1, 1, 2, 1, 4, 6}
// Explanation:
// For price 85:
// Previous consecutive smaller or equal prices are:
// 75, 60, 70, 60, 80 → total 6 days including today.
#include <bits/stdc++.h>

using namespace std;



// Time Complexity : O(n)

int main() {

    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> span((int)price.size(), 0);

    stack<int> s;
    for (int i = 0; i < (int)price.size(); i++) {
        while (s.size() && price[s.top()] <= price[i]) {
            s.pop();
        }
        if (!s.size()) {
            span[i] = i + 1;
        }
        else {
            span[i] = i - s.top();
        }
        s.push(i);
    }
    // print span array
    for (int i = 0; i < (int)price.size(); i++) {
        cout << span[i] << " ";
    }

    return 0;
}