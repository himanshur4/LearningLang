// #include <bits/stdc++.h>
// using namespace std;
// // ☺☺☺
// int main()
// {
//     // int n;
//     // cin >> n;
//     // int *arr = new int[n];
//     int *arr = new int[5]; // consuming a total of 20+4 byte memory, it reserves 5 memory blocks of int data type in heap and 4 byte for storing the address in the stack in the form of pointer
//     char *ch = new char;   // consuming a total of 1+4 byte memory,it reserves a char data type memory in the heap and returns the address of this reserved memory
//     cin >> ch;
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << ch << endl;
//     delete ch;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     delete[] arr;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n"
//          << ch;
//     return 0;
// }

// 2. DYNAMIC MEMORY ALLOCATION OF 2D ARRAY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **arr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // deleting memory
    for (int i = 0; i < m; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}