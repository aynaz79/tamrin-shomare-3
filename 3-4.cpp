
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int flag = 0;
    for (int index = 0; index < n; ++index)
    {
        if (flag == 0)
        {
            cout << '*';
            flag = 1;
        }
        else
        {
            cout << '#';
            flag = 0;
        }
    }
}