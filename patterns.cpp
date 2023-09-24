#include <bits/stdc++.h>
using namespace std;

// Hollow rectangle
int main()
{
    int rows, cols;

    cin >> rows >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << "*";
            }
            else if (((i != 0 && i != rows - 1) && (j != 0 && j != cols - 1)))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}