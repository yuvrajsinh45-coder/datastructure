#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insertBeg(int x) {
    Node *p = new Node{x, head};
    head = p;
}

void insertEnd(int x) {
    Node *p = new Node{x, NULL};
    if (!head) { head = p; return; }
    Node *t = head;
    while (t->next) t = t->next;
    t->next = p;
}

void insertAfter(int key, int x) {
    Node *t = head;
    while (t && t->data != key) t = t->next;
    if (!t) return;
    t->next = new Node{x, t->next};
}

void deleteFirst() {
    if (!head) return;
    Node *t = head;
    head = head->next;
    delete t;
}

void deleteLast() {
    if (!head) return;
    if (!head->next) { delete head; head=NULL; return; }
    Node *t = head;
    while (t->next->next) t = t->next;
    delete t->next;
    t->next = NULL;
}

void deleteAfter(int key) {
    Node *t = head;
    while (t && t->data != key) t = t->next;
    if (!t || !t->next) return;
    Node *p = t->next;
    t->next = p->next;
    delete p;
}

void display() {
    for (Node *t=head; t; t=t->next)
        cout << t->data << " ";
}

int main() {
    insertBeg(20);
    insertBeg(10);
    insertEnd(40);
    insertAfter(20,30);

    cout << "List: ";
    display();

    deleteFirst();
    deleteLast();
    deleteAfter(20);

    cout << "\nAfter deletion: ";
    display();
}