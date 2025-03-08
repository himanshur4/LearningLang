#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return 0;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return 1;
    else
    {
        if (arr[mid] < key)
            return binarySearch(arr, mid + 1, end, key);
        else
            return binarySearch(arr, start, mid - 1, key);
    }
}
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    cout << "Enter the sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key:\n";
    cin >> key;
    if (binarySearch(arr, 0, n - 1, key))
        cout << "Present";
    else
        cout << "Not present";

    return 0;
}

//****************
// 2. FIRST OCCURRENCE AND LAST OCCURRENCE

int firstOcc(int *arr, int start, int end, int num)
{
    if (start > end)
        return 0;
    int mid = start + (end - start) / 2;

    if (arr[mid] == num)
    {
        ans = mid;
        return 
    }
}