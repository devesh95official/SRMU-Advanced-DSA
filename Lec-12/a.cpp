// Binary Search (Divide and Conquer)

#include <bits/stdc++.h>

using namespace std;



int main() {
    //input
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int target;
    cin >> target;
    // lamda Funtion Doing Binary Search
    auto binarySearch = [&]()->int{
        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2; // l/2 + r/2 == (l+r)/2
            // to avoid overflow we wrote mid like above
            if (v[mid] == target)return mid;
            if (v[mid] > target)r = mid - 1;
            else l = mid + 1;
        }
        return -1;
    };

    // calling the functions
    if (binarySearch() != -1) {
        cout << "Element Found at Index : ";
        cout << binarySearch() << endl;
    }
    else {
        cout << "Element Not Found!!";
    }

    return 0;
}