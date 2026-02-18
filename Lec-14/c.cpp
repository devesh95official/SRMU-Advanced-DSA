// 3) VALID PARENTHESES
// Problem Statement:
// Given a string consisting only of the characters:
// ( ) { } [ ]
// Determine whether the string is valid.
// A string is valid if:
//     1. Every opening bracket has a corresponding closing bracket.
//     2. Brackets are closed in the correct order.
//     3. A closing bracket must correspond to the most recent unmatched opening bracket.
// Input:
// String S of length N.
// Output:
// Return true if the string is valid.
// Return false otherwise.
// Example 1:
// Input: "{[()]}"          ->    "{[]}"  ->    "{}"     ->   ""
// Output: true
// Example 2:
// Input: "{[(])}"
// Output: false
// Example 3:
// Input: "((()))"
// Output: true
// Example 4:
// Input: "[({([])})]{[]}(())" -> "[({()})]{[]}(())" -> "[({})]{[]}(())" ->  "[()]{[]}(())" -> "[]{[]}(())" ->
//    "{[]}(())" -> "{}(())" -> "(())" -> "()" ->  ""
// Output: true
#include <bits/stdc++.h>

using namespace std;



int main() {

   string ans = "True";
   // input
   string s;
   cin >> s;
   // stack to keep track of opening brackets
   stack<char> stk;

   for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
         // insert opening bracket in stack
         stk.push(s[i]);
      }
      else {
         if (s[i] == ')' && stk.top() != '(') {
            ans = "False";
            break;
         }
         if (s[i] == '}' && stk.top() != '{') {
            ans = "False";
            break;
         }
         if (s[i] == ']' && stk.top() != '[') {
            ans = "False";
            break;
         }
         
         // remove matching brackets
         stk.pop();
      }
   }


   cout << ans << endl;

   return 0;
}