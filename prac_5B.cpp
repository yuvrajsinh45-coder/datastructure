#include <iostream>
using namespace std;

int q[100], front = -1, rear = -1, n;

void enqueue() {
    int x;

    if ((rear + 1) % n == front)
        cout << "Queue Overflow\n";
    else {
        cout << "Enter value: ";
        cin >> x;

        if (front == -1)
            front = 0;

        rear = (rear + 1) % n;
        q[rear] = x;
    }
}

void dequeue() {
    if (front == -1)
        cout << "Queue Underflow\n";
    else {
        cout << "Deleted: " << q[front] << endl;

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % n;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    int i = front;
    while (true) {
        cout << q[i] << " ";
        if (i == rear) break;
        i = (i + 1) % n;
    }
    cout << endl;
}

int main() {
    int ch;
    cout << "Enter queue size: ";
    cin >> n;

    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Display 0.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
        }
    } while (ch != 0);

    return 0;
}