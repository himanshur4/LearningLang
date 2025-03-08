#include <bits/stdc++.h>
using namespace std;
int countNmerge(int arr[], int s, int mid, int e)
{
    int m = mid - s + 1;
    int n = e - mid;
    int arr1[m], arr2[n];
    int ind = s;
    int ct = 0;
    for (int i = 0; i < m; i++)
    {
        arr1[i] = arr[ind++];
    }
    for (int j = 0; j < n; j++)
    {
        arr2[j] = arr[ind++];
    }
    int i = 0, j = 0, k = s;
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k++] = arr1[i++];
        }
        else
        {
            arr[k++] = arr2[j++];
            ct += m-i;
        }
    }
    while (i < m)
    {
        arr[k++] = arr1[i++];
    }
    while (j < n)
    {
        arr[k++] = arr2[j++];
        // ct++;
    }
    return ct;
}
int countinv(int arr[], int s, int e)
{
    int ct = 0;
    int mid = (s + e) / 2;
    if(s<=e){
        ct += countinv(arr, s, mid);
        ct += countinv(arr, mid + 1, e);
        ct += countNmerge(arr, s, mid, e);
    }
    return ct;
}
int main()
{
    int n;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Number of Inversion Pair is " << countinv(arr, 0, n - 1);
}