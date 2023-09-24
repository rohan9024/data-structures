#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    bool check = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << check << " ";
            check == true ? check = false : check = true;
        }
        cout << endl;
    }

    return 0;
}