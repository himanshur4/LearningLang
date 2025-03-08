#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int s, int e, int mid)
{
    int m = mid - s + 1;
    int n = e - mid;
    vector<int> m1(m), m2(n);
    for (int i = 0; i < m; ++i)
    {
        m1[i] = arr[s + i];
    }
    for (int i = 0; i < n; ++i)
    {
        m2[i] = arr[mid + 1 + i];
    }
    int k = s, i = 0, j = 0;
    while (i < m && j < n)
    {
        if (m1[i] > m2[j])
        {
            arr[k++] = m2[j++];
        }
        else
        {
            arr[k++] = m1[i++];
        }
    }
    while (i < m)
    {
        arr[k++] = m1[i++];
    }
    while (j < n)
    {
        arr[k++] = m2[j++];
    }
}
void mergeSort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    else
    {
        int mid = s + (e - s) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid + 1, e);
        merge(arr, s, e, mid);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}