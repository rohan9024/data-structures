#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int temp[10];
    int j = 9;

    // int temp = 0;

    // for (int i = 0; i < 10 / 2; i++)
    // {
    //     temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;

    //     cout << arr[i] << " " << arr[j] << endl;
    //     j--;

    //     // cout << j << endl;
    // }

    // Storing the reversed array inside another array
    for (int i = 0; i < 10; i++)
    {
        temp[i] = arr[j];
        j--;
    }

    // Printing the array

    for (int i = 0; i < 10; i++)
    {
        cout << temp[i] << " ";
    }
    return 0;
}