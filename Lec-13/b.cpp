// Implementation of Queue Data Structure Using Array!!

#include <bits/stdc++.h>
using namespace std;

class QueueArray {
    int *arr;
    int front, rear, capacity;

public:
    QueueArray(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return front > rear;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Empty Queue\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    // created a array queue
    QueueArray* s = new QueueArray(10);

    // // push a single element
    // s -> push(1);

    // // display
    // s -> display();
    s -> enqueue(1);
    s -> enqueue(2);
    s -> enqueue(3);
    s -> dequeue();
    s -> enqueue(4);
    s -> enqueue(5);
    s -> enqueue(6);


    // display
    s -> display();

    // peek the top element
    cout << s -> peek();

    return 0;
}

