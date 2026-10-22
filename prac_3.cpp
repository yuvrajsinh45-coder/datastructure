#include <iostream>
using namespace std;

int s[100], top = -1, n;

void push() {
    int x;
    if (top == n - 1)
        cout << "Stack Overflow\n";
    else {
        cout << "Enter value: ";
        cin >> x;
        s[++top] = x;
    }
}

void pop() {
    if (top == -1)
        cout << "Stack Underflow\n";
    else
        cout << "Deleted: " << s[top--] << endl;
}

void peek() {
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top: " << s[top] << endl;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << s[i] << " ";
    cout << endl;
}

int main() {
    int ch;
    cout << "Enter stack size: ";
    cin >> n;

    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 0.Exit\n";
        cin >> ch;

        switch (ch) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
        }
    } while (ch != 0);

    return 0;
}