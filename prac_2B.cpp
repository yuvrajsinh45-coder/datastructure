#include <iostream>
using namespace std;

void value(int x) {
    x = x + 10;
    cout << "Inside value: " << x << endl;
}

void reference(int &x) {
    x = x + 10;
    cout << "Inside reference: " << x << endl;
}

int main() {
    int a = 5, b = 5;

    value(a);
    cout << "After value: " << a << endl;

    reference(b);
    cout << "After reference: " << b << endl;

    return 0;
}