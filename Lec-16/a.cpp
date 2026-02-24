#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
    //constructor
    node(int x) {
        data = x;
        next = nullptr;
    }
};

int main() {

    node* head = new node(2);
    head -> next = new node(3);
    head -> next -> next = new node(4);
    // print linked list
    node*temp = head;
    while (temp) {
        cout << temp -> data << " -> ";
        temp = temp->next;
    }

    return 0;
}