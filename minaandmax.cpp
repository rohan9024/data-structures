#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int max = arr[0];
    int min = arr[0];

    for (auto it : arr)
    {
        if (it > max)
        {
            max = it;
        }
        if (it < min)
        {
            min = it;
        }
    }
    cout << max << " " << min << endl;
    return 0;

    
}