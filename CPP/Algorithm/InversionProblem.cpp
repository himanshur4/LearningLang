// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter Size of the array\n";
//     cin >> n;
//     int arr[n];
//     cout<<"Enter elements of the array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int ct = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 ct++;
//             }
//         }
//     }
//     cout << ct << " inversion pair of elements is present in this array";
//     return 0;
// }


// 3.Sum of maximum elements of every possible sub-array of the array


#include <bits/stdc++.h>
using namespace std;


int findMaxSum(int arr[], int n)
{
    
    int CL[n] = {0}, CR[n] = {0};

    // Stack for storing the indexes
    stack<int> q;

    // Calculate left count for every index
    for (int i = 0; i < n; i++)
    {
        while (q.size() != 0 && arr[q.top()] <= arr[i])
        {
            CL[i] += CL[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }

    while (q.size() != 0)
        q.pop();

   
    for (int i = n - 1; i >= 0; i--)
    {
        while (q.size() != 0 && arr[q.top()] < arr[i])
        {
            CR[i] += CR[q.top()] + 1;
            q.pop();
        }
        q.push(i);
    }

    
    while (q.size() != 0)
        q.pop();

    int ans = 0;

    for (int i = 0; i < n; i++)
        ans += (CL[i] + 1) * (CR[i] + 1) * arr[i];

    return ans;
}

int main()
{
    int n;
cout << "Enter the size of array\n";
cin >> n;
cout<<"Enter elements of the array:\n";
int arr[n];
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}
    cout <<"Sum of the elements of the Maximum Subarray: "<<findMaxSum(arr, n);
}
