#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *last = NULL;

void insertBeg(int x) {
    Node *p = new Node{x, NULL};
    if (!last) {
        last=p; p->next=p;
    } else {
        p->next=last->next;
        last->next=p;
    }
}

void insertEnd(int x) {
    insertBeg(x);
    last=last->next;
}

void insertAfter(int key, int x) {
    if (!last) return;
    Node *t=last->next;
    do {
        if(t->data==key) {
            t->next=new Node{x,t->next};
            if(t==last) last=t->next;
            return;
        }
        t=t->next;
    } while(t!=last->next);
}

void deleteFirst() {
    if(!last) return;
    Node *p=last->next;
    if(p==last) last=NULL;
    else last->next=p->next;
    delete p;
}

void deleteLast() {
    if(!last) return;
    Node *t=last->next;
    if(t==last) {
        delete last;
        last=NULL;
        return;
    }
    while(t->next!=last) t=t->next;
    t->next=last->next;
    delete last;
    last=t;
}

void display() {
    if(!last) return;
    Node *t=last->next;
    do {
        cout << t->data << " ";
        t=t->next;
    } while(t!=last->next);
}

int main() {
    insertBeg(20);
    insertBeg(10);
    insertEnd(30);
    insertAfter(20,25);

    cout << "List: ";
    display();

    deleteFirst();
    deleteLast();

    cout << "\nAfter deletion: ";
    display();
}