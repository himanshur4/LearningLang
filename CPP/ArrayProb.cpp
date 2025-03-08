// 1. Find Second Largest and second Smallest Element

// #include <bits/stdc++.h>
// using namespace std;
// int slarge(int a[], int size)
// {
//     int largest = a[0];
//     int slargest = -1;
//     for (int i = 1; i < size; i++)
//     {
//         if (a[i] > largest)
//         {
//             slargest = largest;
//             largest = a[i];
//         }
//         else if (a[i] < largest && a[i] > slargest)
//         {
//             slargest = a[i];
//         }
//     }

//     return slargest;
// }
// int ssmall(int a[], int size)
// {
//     int smallest =a[0];
//     int ssmal=INT16_MAX;
//     for(int i=1;i<size;i++){
//         if(a[i]<smallest){
//             ssmal=smallest;
//             smallest=a[i];
//         }
//         else if(a[i]>smallest&&a[i]<ssmal){
//             ssmal=a[i];
//         }
//     }
//     return ssmal;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     cout << "Enter the elements of the array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "The Second largest element is:\n";
//     cout << slarge(a, n) << endl;
//     cout << "The Second Smallest element is:\n";
//     cout << ssmall(a, n) << endl;
//     return 0;
// }

// 2. Left Rotate an array by k places

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cout << "Enter size of array:\n";
//     cin >> n;
//     int a[n];
//     cout << "Enter the elements of the array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cout << "Enter value of k:\n";
//     cin >> k;
//     reverse(a, a + k);
//     reverse(a + k, a + n);
//     reverse(a, a + n);
// 
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }


//3.Union of two sorted array


#include<bits/stdc++.h>
using namespace std;

int main()
{ int m,n;
    cin >>m>>n;
    int a1[m],a2[n];
    cout << "Enter the sorted elements of the array1\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }
     cout << "Enter the sorted elements of the array2\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }
    




return 0;
}