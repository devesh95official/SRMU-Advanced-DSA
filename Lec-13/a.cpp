// Implementation of Stack Data Structure Using Array!!

#include <bits/stdc++.h>
using namespace std;

class StackArray {
    int *arr;
    int top;
    int capacity;

public:
    StackArray(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Empty Stack\n";
            return -1;
        }
        return arr[top];
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    // created a array stack
    StackArray* s = new StackArray(10);

    // // push a single element
    // s -> push(1);

    // // display
    // s -> display();
    s -> push(1);
    s -> push(2);
    s -> push(3);
    s -> push(4);
    s -> push(5);
    s -> pop();
    s -> push(6);


    // display
    s -> display();

    // peek the top element
    cout << s -> peek();

    return 0;
}
