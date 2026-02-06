// stacks and queues

#include <bits/stdc++.h>

using namespace std;



int main() {

    stack<int> s;

    // push()
    // pop()
    // top()
    // size()

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);

    s.pop();

    while (s.size() > 0) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}