#include <iostream>
using namespace std;

bool arrayContainsNumber(int array[], int length, int number)
{
    for (int index = 0; index < length; ++index)
    {
        if (array[index] == number)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int array[n];
    int counter = 0;
    int duplicate;
    int flag = 0;
    while (counter < n)
    {
        int randomNumber = rand();
        while (arrayContainsNumber(array, counter, randomNumber))
        {
            randomNumber = rand();
        }
        array[counter++] = randomNumber;
    }
    for (int index = 0; index < n; ++index)
    {
        cout << array[index] << ' ';
    }
}