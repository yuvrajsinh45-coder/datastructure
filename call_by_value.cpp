#include <iostream>
using namespace std;

/* function using Call by Value */
void callByValue(int x)
{
    x = x + 10;
    cout << "Value inside function: " << x << endl;
}

int main()
{
    int a;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Value of a before function call: " << a << endl;

    /* function call */
    callByValue(a);

    cout << "Value of a after function call: " << a << endl;

    return 0;
}