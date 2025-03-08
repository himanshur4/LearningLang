#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice, n;
    cout << "Enter choice:\n1.left triangular\n2.reverse left triangular\n3.christmas\n4.diamond\n5.half left diamond\n6.half right diamond\n7.exit programme\n";
    cin >> choice;
    cout << "Enter number of rows\n";
    cin >> n;
    while (choice != 7)
    {
        switch (choice)
        {
        case 1:
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 2:
            for (int i = n; i > 0; i--)
            {
                for (int j = 0; j < i; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 3:
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < 2 * n - 1; j++)
                {
                    if (j < n - 1 - i || j > n - 1 + i)
                        cout << " ";
                    else
                        cout << "*";
                }
                cout << endl;
            }
            break;
        case 4:
            for (int i = 0; i < n; i++)
            {

                for (int j = 0; j < 2 * n - 1; j++)
                {
                    if (j < n - 1 - i || j > n - 1 + i)
                        cout << " ";
                    else
                        cout << "*";
                }
                cout << endl;
            }
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < 2 * n - 1; j++)
                {
                    if (j > i && j < 2 * n - 2 - i)
                        cout << "*";
                    else
                        cout << " ";
                }
                cout << endl;
            }
            break;
        }
    }
    return 0;
}