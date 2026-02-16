// Quick Sort

#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> & a, int l, int r) {
    int pivot = a[r]; // choose last element as pivot
    int i = l - 1; // smaller element index

    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1; // pivot index
}

// recursive quicksort
void quickSort(vector<int> &a, int l, int r) {
    if (l >= r)return;

    int pi = partition(a, l, r);

    // apply quickSort on both the parts
    quickSort(a, l, pi - 1 );
    quickSort(a, pi + 1, r);
}

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    quickSort(v, 0, n - 1);

    //print the sorted array
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}