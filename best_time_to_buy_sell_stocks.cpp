#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prices[n];

    for (int i = 0; i < n; i++)
        cin >> prices[i]; /*reads the input values for the prices array*/

    int minPrice = prices[0]; /*initializes the minimum price to the first element*/
    int profit = 0;/* store maximum profit found */

    for (int i = 1; i < n; i++) { /*starts from second day (first day is minprice) and checks each day prizes */
        if (prices[i] < minPrice)/*if today's price is less than the current minimum price, update minPrice.*/
            minPrice = prices[i];

        if (prices[i] - minPrice > profit)/*calculate profit if we sell on current day */
            profit = prices[i] - minPrice; /* if profit is greater than current max profit update profit*/
    }

    cout << profit;

    return 0;
}