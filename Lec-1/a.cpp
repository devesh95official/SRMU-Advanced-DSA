// Tail recursion
#include <bits/stdc++.h>

using namespace std;

void print(int n) {

    if (n == 0)return; // base case

    cout << n << " ";

    print(n - 1); //recursive case

}

int main() {

    print(3);

    return 0;
}