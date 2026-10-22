#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]) - 1;

        if (nums[index] > 0)
            nums[index] = -nums[index];
    }

    
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0)
            cout << i + 1 << " ";
    }

    return 0;
}