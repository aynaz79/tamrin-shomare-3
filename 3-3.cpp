
#include <bits/stdc++.h>
using namespace std;

int isArraySorted(int array[], int length)
{
    if (length == 1 || length == 0)
        return 1;

    if (array[length - 1] < array[length - 2])
        return 0;

    return isArraySorted(array, length - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int array[n];
    cout << "Enter the elements:\n";
    for (int index = 0; index < n; ++index)
    {
        cin >> array[index];
    }
    if (isArraySorted(array, n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}