#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100] = "{ ( [ ] ) }";

    map<int, string> map;
    int n = 1;
    char *ptr; // declare a ptr pointer
    ptr = strtok(str, " ");
    for (int i = 0; i < 10; i++)
    {
        cout << ptr << " ";
    }

    cout << ptr << endl;
    // for (auto &i : str)
    // {

    //     map.insert(n, str[i]);
    //     n++;
    // }
    // for (auto &i : map)
    // {
    // }

    return 0;
}