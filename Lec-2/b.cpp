// Linear Search

#include <bits/stdc++.h>

using namespace std;

// 1 3 3 3 10 11
// 1 3 3 3 10
// 1 3 3 3
// 1 3 3
// 1 3
// 1
// break;
// //end

bool search(int a[], int n, int key) {
    if (n == 0)return false;
    if (a[n - 1] == key)return true;
    return search(a, n - 1, key);
}

int main() {

    // search if key exists in the array or not!!
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // to search in array
    int key;
    cin >> key;

    // // iteration
    // for (int i = 0; i < n; i++) {
    //     if (key == arr[i]) {
    //         cout << "Numbers exists in array\n";
    //     }
    // }

    // recursion
    if (search(arr, n, key))cout << "Element Found!!";
    else cout << "Element Not Found!!";

    return 0;
}