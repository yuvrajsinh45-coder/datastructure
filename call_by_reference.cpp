#include <iostream>
using namespace std;

/* function using Call by Reference */
void callByReference(int *x)
{
    *x = *x + 10;
    cout << "Value inside function: " << *x << endl;
}

int main()
{
    int b;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Value of b before function call: " << b << endl;

    /* function call by passing address */
    callByReference(&b);

    cout << "Value of b after function call: " << b << endl;

    return 0;
}