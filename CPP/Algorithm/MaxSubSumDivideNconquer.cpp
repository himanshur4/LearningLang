#include <bits/stdc++.h>
using namespace std;
int maxCrossSum(int arr[], int s, int mid, int e)
{
    int sum = 0;
    int leftsum = INT_MIN, rightsum = INT_MIN;
    for (int i = mid; i >= s; i--)
    {
        sum += arr[i];
        if (sum > leftsum)
        {
            leftsum = sum;
        }
    }
    sum = 0;
    for (int i = mid + 1; i <= e; i++)
    {
        sum += arr[i];
        if (sum > rightsum)
        {
            rightsum = sum;
        }
    }
    return max(max(leftsum + rightsum-arr[mid], leftsum), rightsum);
}
int maxSubSum(int arr[], int s, int e)
{
    if (s == e)
    {
        return arr[s];
    }

    int mid = s + (e - s) / 2;
    return max(max(maxSubSum(arr, s, mid), maxSubSum(arr, mid + 1, e)), maxCrossSum(arr, s, mid, e));
}
int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = maxSubSum(arr, 0, n - 1);
    cout << "Maximum Subarray sum: " << sum;
    return 0;
}