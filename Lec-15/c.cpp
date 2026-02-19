// https://www.codechef.com/problems/SUBAADDB

#include <bits/stdc++.h>

using namespace std;



int main() {
   //input
   int t;
   cin >> t;
   while (t--) {
      int n, a, b;
      cin >> n >> a >> b;
      //code
      {
         while (a <= n)n -= (a - b); // subtract till bigger or equal than a
         cout << n << endl;
      }
   }

   return 0;
}