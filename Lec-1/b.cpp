// Head recursion
#include <bits/stdc++.h>

using namespace std;

void print(int n) {

    if (n == 0)return; // base case

    print(n - 1); //recursive case
    
    cout << n << " ";


}

int main() {

    print(3);

    return 0;
}