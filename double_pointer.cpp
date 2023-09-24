#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    cout << "Value of a = " << a << endl;
    cout << "Address of a = " << &a << endl;
    // cout << "Value of a using single pointer  = " << *ptr << endl;
    cout << "Value of a using single pointer  = " << ptr << endl;
    // cout << "Address of a using single pointer  = " << &ptr << endl;
    // cout << "Value of a using double pointer  = " << *ptr2 << endl;
    // cout << "Address of a using double pointer  = " << &ptr2 << endl;
    // cout << "Value of a using double pointer  = " << **ptr2 << endl;

    return 0;
}

// You need a double pointer(level 2) to point to a single star pointer
// Double pointer can point two addresses at the same time      (Huge Advantage!!!!!)