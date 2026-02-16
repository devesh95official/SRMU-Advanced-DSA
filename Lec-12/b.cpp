// Merge Sort

#include <bits/stdc++.h>

using namespace std;

// merge two sorted Halves
void merge(vector<int> & a, int l, int mid, int r) {
    int i = l, j = mid + 1;

    vector<int> temp;
    // merge elements in sorted order
    while (i <= mid && j <= r) {
        if (a[i] <= a[j])temp.push_back(a[i++]);
        else temp.push_back(a[j++]);
    }
    // remaining elements
    while (i <= mid)temp.push_back(a[i++]);
    while (j <= r)temp.push_back(a[j++]);

    // copy back to original form
    for (int k = 0; k <(int) temp.size(); k++) {
        a[l + k] = temp[k];
    }
}

// recursive mergesort
void mergeSort(vector<int> &a, int l, int r) {
    if (l >= r)return;

    int mid = l + (r - l) / 2;// (l + r) / 2

    // apply mergeSort on both the parts
    mergeSort(a, l, mid);
    mergeSort(a, mid + 1, r);
    // combine both the parts
    merge(a, l, mid, r);
}

int main() {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    mergeSort(v, 0, n - 1);

    //print the sorted array
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}