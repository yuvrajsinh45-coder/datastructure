#include <iostream>
using namespace std;

int q[100], front = 0, rear = -1, n;

void enqueue() {
    int x;
    if (rear == n - 1)
        cout << "Queue Overflow\n";
    else {
        cout << "Enter value: ";
        cin >> x;
        q[++rear] = x;
    }
}

void dequeue() {
    if (front > rear)
        cout << "Queue Underflow\n";
    else
        cout << "Deleted: " << q[front++] << endl;
}

void display() {
    if (front > rear)
        cout << "Queue is empty\n";
    else {
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << endl;
    }
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