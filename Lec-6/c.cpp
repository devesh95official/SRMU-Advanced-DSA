#include <bits/stdc++.h>

using namespace std;



int main() {

    // difference b/w size and capacity
    vector<int> v(3, 1); // {1 , 1 , 1}

    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Size : " << v.size() << "   Capacity : " << v.capacity() << endl;

    return 0;
}