#include <bits/stdc++.h>

using namespace std;


void sumTillN(int n, int&sum) {
    if (n == 0)return;

    sum += n;

    sumTillN(n - 1, sum);

}

int main() {
    int n;
    cin >> n;
    int sum = 0;

    sumTillN(n, sum);

    cout << sum << endl;

    return 0;
}