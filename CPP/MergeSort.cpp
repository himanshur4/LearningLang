#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int l1 = mid - start + 1;
    int l2 = end - mid;
    int *arr1 = new int[l1];
    int *arr2 = new int[l2];
    int ind = start;
    for (int i = 0; i < l1; i++)
    {
        arr1[i] = arr[ind++];
    }
    for (int j = 0; j < l2; j++)
    {
        arr2[j] = arr[ind++];
    }
    int k = start, i = 0, j = 0;//*imp : k= start, not zero
    while (i < l1 && j < l2)
    {
        if (arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }
    while (j < l2)
    {
        arr[k++] = arr2[j++];
    }
    while (i < l1)
    {
        arr[k++] = arr1[i++];
    }
    delete[] arr1;
    delete [] arr2;
}
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}