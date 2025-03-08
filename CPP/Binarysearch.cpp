#include <bits/stdc++.h>
using namespace std;

int BinarySearchIterative(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }
    mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[100];
    cout << "enter sorted array in ascending order\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter elements to be searched\n";
    cin >> key;
    cout << "index is " << BinarySearchIterative(arr, n, key) << endl;

    return 0;
}
/*

// Problems of Binary Search
//1. Index Of First And last Occurrence
#include <bits/stdc++.h>
using namespace std;
int fisrtOcc(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}
int lastocc(int array[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (array[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (array[mid] < key)
        {
            start = mid + 1;
        }
        else if (array[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()
{
    int n, key;
    cin >> n;
    int arr[100];
    cout << "enter sorted array in ascending order\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter elements to find its first occurrence\n";
    cin >> key;
    int indexF = fisrtOcc(arr, n, key);
    int indexL = lastocc(arr, n, key);
    cout << "First occurence of " << key << " is at index " << indexF << endl;
    cout << "last occurence of " << key << " is at index " << indexL << endl;
    return 0;
}*/