#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int decrement = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - decrement; j++)
        {
            cout << j << " ";
        }
        cout << endl;
        decrement++;
    }

    return 0;
}