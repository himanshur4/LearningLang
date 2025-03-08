#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1, n1, m2, n2;
    cout << "Enter order of matrix 1\n";
    cin >> m1 >> n1;
    cout << "Enter order of matrix 2 (n1=m2)\n";
    cin >> m2 >> n2;
    int arr2[m2][n2];
    int arr1[m1][n1];
    cout << "enter elements of array1\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "enter elements of array2\n";
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> arr2[i][j];
        }
    }


    return 0;
}