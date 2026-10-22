#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int candyType[n];

    for (int i = 0; i < n; i++)
        cin >> candyType[i];

    set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(candyType[i]);

    int types = s.size();
    int canEat = n / 2;

    if (types < canEat)
        cout << types;
    else
        cout << canEat;

    return 0;
}