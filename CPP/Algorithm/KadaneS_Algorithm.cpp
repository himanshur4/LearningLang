// for finding maximum subarray sum
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0, maxi = INT_MIN;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
            start = tempStart;
            end = i;
        }
        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Subarray with maximum Sum:\n";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nMaximum Subarray Sum: " << maxi;
    return 0;
}
