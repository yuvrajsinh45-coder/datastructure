#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prices[n];

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int buy1 = INT_MIN;
    int sell1 = 0;
    int buy2 = INT_MIN;
    int sell2 = 0;

    for (int i = 0; i < n; i++)
    {
        buy1 = max(buy1, -prices[i]);
        sell1 = max(sell1, buy1 + prices[i]);
        buy2 = max(buy2, sell1 - prices[i]);
        sell2 = max(sell2, buy2 + prices[i]);
    }

    cout << "Maximum Profit = " << sell2;

    return 0;
}