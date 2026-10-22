#include <iostream>
#include <cstdlib>   // For malloc() and free()

using namespace std;

int main()
{
    int n;

    /* input number of elements */
    cout << "Enter the number of elements: ";
    cin >> n;

    /* dynamic memory allocation using malloc() */
    int *arr = (int *)malloc(n * sizeof(int));

    /* Check if memory allocation is successful */
    if (arr == NULL)
    {
        cout << "Memory Allocation Failed";
        return 0;
    }

    /* Input array elements */
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(arr + i);
    }

    /* Print array elements in reverse order */
    cout << "Array elements in reverse order: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << *(arr + i) << " ";
    }

    /* Free allocated memory */
    free(arr);

    return 0;
}