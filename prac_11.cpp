#include <iostream>
using namespace std;

int main() {
    int a[20], n, x, l = 0, r, mid;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> x;

    r = n - 1;

    while(l <= r) {
        mid = (l + r) / 2;

        if(a[mid] == x) {
            cout << "Element found at position " << mid + 1;
            return 0;
        }
        else if(a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    cout << "Element not found";
}