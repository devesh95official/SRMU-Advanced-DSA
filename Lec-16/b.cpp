#include <bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node* next;
    node* prev;
    //constructor
    node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

int main() {

    node* head = new node(2);
    head -> next = new node(3);
    head -> next ->prev = head;
    // print linked list
    node*temp = head;
    while (temp) {
        cout << temp -> data << " <-> ";

        temp = temp->next;
    }

    return 0;
}