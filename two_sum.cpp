#include<iostream>
using namespace std;

void twosum(int arr[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
                return;
            }
        }
    }
    cout << "No pair found\n";
}
int main() {
    int arr[100], n, target;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter target sum: ";
    cin >> target;

    twosum(arr, n, target);

    return 0;
}