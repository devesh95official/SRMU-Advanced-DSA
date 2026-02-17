// Implementation of Circular Queue Data Structure Using Array!!

#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % capacity;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % capacity;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Empty Queue\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) return;

        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};


int main() {

    CircularQueue* q = new CircularQueue(5);

    q -> enqueue(1);
    q -> enqueue(2);
    q -> enqueue(3);
    q -> enqueue(4);
    q -> enqueue(5);

    // display
    q -> display();

    // queue overflow
    q -> enqueue(6);

    q -> dequeue();
    q -> enqueue(6);

    // display
    q -> display();

    q -> dequeue();
    q -> dequeue();
    q -> dequeue();
    q -> dequeue();
    q -> dequeue();
    
    // underflow
    q -> dequeue();




    return 0;
}
