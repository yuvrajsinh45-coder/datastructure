#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n); /*creates a vector of size n*/
    for (int i = 0; i < n; i++)/*stores inpuut values in vector*/
        cin >> nums[i];

    int count = 0, candidate; /* here two variables are declared */
/*one to keep track of the count of the candidate element and other to store the candidate element*/
    for (int x : nums) { /*loop visits each element in the vector*/
        if (count == 0)
            candidate = x;/*vote count 0 choose current element as new candidate*/

        count += (x == candidate) ? 1 : -1; /*if current element is the same as the candidate, increment count, otherwise decrement it*/
    }

    cout << candidate;

    return 0;
}