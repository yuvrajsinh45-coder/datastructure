#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n); /*creates a vector of size n */

    for (int i = 0; i < n; i++)
        cin >> nums[i];   /* print array */

    int j = 0; /* index of the next position to place a non-zero element */

    
    for (int i = 0; i < n; i++) { /* Move all non-zero elements to the front */
        if (nums[i] != 0) {/* checks if the current element is non-zero */
            swap(nums[i], nums[j]);/* swaps the current element with the element at index j */
            j++;/* increments the index of the next position to place a non-zero element */
        }
    }

   
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}