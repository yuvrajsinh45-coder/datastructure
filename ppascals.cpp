#include<iostream> 
#include<vector> /* vectors used for dyanamic arrays because pascals triangle haas different size */
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> ans;  /* creation of vector(2d) named ans */

    for (int i = 0;i < n; i++) {  /* it prints row from 0 to n-1 */
        vector<int> row(i + 1, 1); /* vector created named row with size i+1 and all elements initialized to 1 */

        for (int j = 1; j < i; j++) /*calculated the middle elements */
            row[j] = ans[i - 1][j - 1] + ans[i - 1][j]; /*every elemnt is sum of its above two numbers ( main element )*/

        ans.push_back(row); /*used to store one row after completing it in a 2d vector */
    }

    for (auto row : ans) { /*this loop picks each row from the 2D vector one by one.*/
        for (int x : row) //* it prints every elemnt for each current row in the 2D vector. */
            cout << x << " "; 
        cout << endl;
    }

    return 0;
}