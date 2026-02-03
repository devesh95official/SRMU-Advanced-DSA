// check sorted array using recursion

#include <bits/stdc++.h>

using namespace std;

bool sorted(int a[], int n) {
    if (n <= 1) return true;
    if (a[n - 1] < a[n - 2])return false;
    return sorted(a, n - 1);
}

int main() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (sorted(arr, n))cout << "Sorted Array!!";
    else cout << "Not Sorted Array!!";

    return 0;
}