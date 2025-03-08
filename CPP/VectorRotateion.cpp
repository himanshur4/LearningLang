#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cout << "Enter the value of k by which you want to rotate the array\n";
    cin >> k;
    vector<int> v;

    int n, m;
    cout << "Enter the size of array\n";
    cin >> n;
    cout << "Enter the element of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=v[i];
    }
    cout<<"\nrotated array is:\n";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}