// stacks and queues

#include <bits/stdc++.h>

using namespace std;



int main() {

    queue<int> s;

    // push()
    // pop()
    // front()
    // back()
    // size()

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);

    s.pop();

    while (s.size() > 0) {
        cout << s.front() << " ";   // s.back() returns last element in queue
        s.pop();
    }

    return 0;
}