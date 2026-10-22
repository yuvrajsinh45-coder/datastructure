#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    /* it creates array */
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    /* traversal : visits every element and prints it  */
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    /* insertion : adds an element at a specific position */
    int pos, item;
    cout << "\n\nEnter position to insert (0 to " << n << "): ";
    cin >> pos;

    cout << "Enter element to insert: ";
    cin >> item;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = item;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    /* deletion : removes an element from a specific position */
    cout << "\n\nEnter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    /* search : finds an element in the array */
    int key, found = 0;
    cout << "\n\nEnter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position: " << i;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Element not found";
    }

    return 0;
}