#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int timeSeries[n];

    for (int i = 0; i < n; i++)
        cin >> timeSeries[i];

    int duration;
    cin >> duration;

    int total = 0; /* at start poison time is 0*/

    for (int i = 0; i < n - 1; i++) {  /*compares attack with every attack */

        int gap = timeSeries[i + 1] - timeSeries[i]; /*gap between consecutive attacks*/

        if (gap < duration)
            total = total + gap;  /* if gap is less than duration then it will overlap */
            /* loop ends if the gap is greater  than duration */
        else
            total = total + duration;
    }

    total = total + duration; /* at last print the total and duration */

    cout << total;

    return 0;
}