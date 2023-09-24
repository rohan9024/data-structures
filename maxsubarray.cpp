#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[5] = {10, 20, -3, 40, 50};
    int arr[5] = {-10, -20, -3, -40, -50};
    int sum = arr[0];
    int sum1 = arr[0];

    int maxSum = 1;
    int min = arr[0];

    // for (int i = 0; i < 5; i++)
    // {
    //     sum = 0;
    //     for (int j = i; j < 5; j++)
    //     {
    //         sum += arr[j];
    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //             cout << "Max sum value updated to: " << maxSum << endl;
    //         }
    //     }
    // }

    // cout << "Max sum is: " << maxSum << endl;

    // Picking out the min first and then calculating the sum
    // for (int i = 0; i < 5; i++)
    // {
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }

    //     sum += arr[i];
    // }
    // cout << "Sum during first attempt: " << sum << endl;
    // sum = 0;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] != min)
    //     {
    //         sum += arr[i];
    //     }
    // }
    // cout << "Sum during second attempt: " << sum << endl;

    // Not using the negative values
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         sum += arr[i];
    //     }
    // }
    // cout << "Sum without using negative integers " << sum << endl;

    // If the input has only negative numbers then -->

    // for (int i = 0; i < 5; i++)
    // {
    //     //
    // }

    // My optimised solution

    // Look for positive integers so that they can add up the sum very easily
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    maxSum = sum;

    // If the input has only negatives
    // Then this loop will run
    // Looking for only negatives and adding up the sum

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 0)
        {
            sum1 += arr[i];
        }
    }

    if (maxSum < sum1)
    {
        maxSum = sum1;
    }

    cout << maxSum << endl;
    return 0;
}