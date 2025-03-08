// 1. PRINT COUNTING

/*#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    else
    {
        // print(n - 1);//head recursion(print counting in ascending order)
        cout << n << " ";
        print(n - 1); // tail recursion(print ocuntingg in decsending order)
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}*/

//*******************

// 2.SAYDIGIT

// #include <bits/stdc++.h>
// using namespace std;
// void sayDigit(int n, string ar[])
// {
//     if (n == 0)
//         return;

//     sayDigit(n / 10, ar);
//     cout << ar[n % 10] << " ";
// }
// int main()
// {
//     int n;
//     cin >> n;
//     string arr[] = {"zero", "one", "two", "three", "four", "five", "six","seven","eight","nine"};
//     sayDigit(n, arr);
//     return 0;
// }

// //************
// //3.Linear search and (sorted or not) of an array
// #include <bits/stdc++.h>
// using namespace std;
// bool sorted(int arr[], int size)
// {
//     if (size == 0 || size == 1)
//         return true;
//     if (arr[0] > arr[1])
//         return false;
//     else
//     {
//         bool ans;
//         ans = sorted(arr + 1, size - 1);
//     }
// }
// int sum(int arr[], int size)
// {
//     if (size == 0)
//         return 0;

//     else
//     {
//         return arr[0] + sum(arr + 1, size - 1);
//         // or return arr[size-1]+sum(arr,size-1);
//     }
// }
// bool ls(int *arr, int size, int k)
// {
//     if (arr[0] == k)
//         return 1;
//     else if (size == 0)
//         return 0;
//     else
//         return ls(arr + 1, size - 1, k);
// }

// int main()
// {
//     int n, key;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     if (sorted(arr, n))
//     {
//         cout << "sorted\n";
//         cout << "\nEnter key for linear search:\n";
//         cin >> key;
//         if (ls(arr, n, key))
//             cout << "Found(L.S)\n";
//         else
//             cout << "Not found(L.S)\n";
//     }
//     else
//         cout << "Not sorted\n";

//     return 0;
// }

// //*************************
// // 4.FINDING POWER OF A NUMBER IN OPTIMISED WAY(a^b)

// #include <bits/stdc++.h>
// using namespace std;
// int power(int a, int b)
// {
//     if (b == 0)
//         return 1;

//     else
//     {
//         int ans = power(a, b / 2)*power(a,b/2);
//         if (b & 1)
//         {
//             return ans * a;
//         }
//         else
//             return ans;
//     }
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << "The Value of a^b is: " << power(a, b);
//     return 0;
// }

// //*****************************
// // 5. BUBBLE SORT
#include <bits/stdc++.h>
using namespace std;
void Bubblesort(int arr[], int index)
{
    if (index < 0)
        return;
    else
    {
        for (int i = 0; i < index; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        Bubblesort(arr, index - 1);
        cout << arr[index] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    Bubblesort(arr, n - 1);
    return 0;
}

// //********************************
// //6.SELECTION SORT
// #include <bits/stdc++.h>
// using namespace std;
// void Selecsort(int arr[], int n, int index = 0)
// {
//     if (index == n)
//         return;
//     else
//     {
//         int mini = index;
//         for (int i = index + 1; i < n; i++)
//         {
//             if (arr[i] < arr[mini])
//                 mini = i;
//         }
//         swap(arr[mini], arr[index]);
//         cout << arr[index] << " ";
//         Selecsort(arr, n, index + 1);
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> arr[i];
//     }
//     Selecsort(arr, n);
//     return 0;
// }




//*************************
// // 7. INSERTION SORT