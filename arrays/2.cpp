#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int main()
{

    // int l1[3] = {2, 4, 3};
    int l1[MAX] = {2, 4, 3, 5, 6, 7};

    int l2[MAX] = {5, 6, 4};

    int carry = 0;
    int l3[3];

    for (int i = 0; i < min(sizeof(l2) / sizeof(l2[0]), sizeof(l1) / sizeof(l1[0])); i++)
    {
        l3[i] = ((l1[i] + l2[i]) % 10) + carry;
        carry = (l1[i] + l2[i]) / 10;
    }
    for (int i : l3)
    {
        cout << i << endl;
    }

    return 0;
}
