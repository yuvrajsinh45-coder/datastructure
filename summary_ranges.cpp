#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n); /*creates a vector of size n */

    for (int i = 0; i < n; i++)
        cin >> nums[i];   /* print array */

    for (int i = 0; i < n; i++) { /* loop goes through every element of array*/

        int start = nums[i];     /* store the current element as starting point of the range */
        
        while (i < n - 1 && nums[i + 1] == nums[i] + 1)/*   i <n-1 checks if the next element exists or not  checks if the next element is consecutive */
            i++;

        int end = nums[i];     /* prints the last element of the range */

        if (start == end)
            cout << start << endl;
        else
            cout << start << "->" << end << endl;
    }

    return 0;
}