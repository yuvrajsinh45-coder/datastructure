#include <iostream>
using namespace std;

int main() {
    int a[100], n, *p;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    p = a + n - 1;

    cout << "Reverse array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << *(p--) << " ";

    return 0;
}