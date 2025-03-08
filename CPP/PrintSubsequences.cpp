// 1. Print all subsequences using recursion
//******************************************************************************************

// #include <bits/stdc++.h>
// using namespace std;
// void subsequences(int ind,vector<int>&arr,vector<int>&ans){
//     if(ind>=arr.size()){
//         for(int i:ans){
//             cout<<i<<" ";

//         }cout<<endl;
//         return;
//     }

//     ans.push_back(arr[ind]);
//     subsequences(ind+1,arr,ans);
//     ans.pop_back();
//     subsequences(ind+1,arr,ans);
// }
// int main()
// {
//     vector<int> arr(3);
//     for(int i=0;i<3;i++){
//         cin>>arr[i];
//     }
//     vector<int>ans;
//     subsequences(0,arr,ans);
//     return 0;
// }

//******************************************************************************************
// 2. print all subsequences from a given array whose sum of element is equal to given sum

// #include <bits/stdc++.h>
// using namespace std;
// void SubSum(int ind, vector<int> &arr, vector<int> &ans, int sum, int s)
// {
//     if (ind >= arr.size())
//     {
//         if (s == sum)
//         {
//             for (auto i : ans)
//             {
//                 cout << i << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }
//     s+=arr[ind];
//     ans.push_back(arr[ind]);
//     SubSum(ind+1,arr,ans,sum,s);
//     s-=arr[ind];
//     ans.pop_back();
//     SubSum(ind+1,arr,ans,sum,s);
// }
// int main()
// {
//     int n, rsum;
//     cout << "Enter the number of elements in the array\n";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter the elements of the array\n";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the required sum\n";
//     cin >> rsum;
//     vector<int> ans;
//     cout<<"Required Subsequences\n";
//     SubSum(0, arr, ans, rsum, 0);

//     return 0;
// }


//*****************************************************************************************
// 3. print any subsequence from a given array whose sum of element is equal to given sum

#include <bits/stdc++.h>
using namespace std;
bool subs(int ind, vector<int> &arr, vector<int> &ans, int s, int sum)
{
    if (ind >= arr.size())
    {
        if (sum == s)
        {
            for (auto i : ans)
                cout << i << " ";
            return true;
        }
        return false;
    }
    s += arr[ind];
    ans.push_back(arr[ind]);
    if (subs(ind + 1, arr, ans, s, sum))
        return true;
    s -= arr[ind];
    ans.pop_back();
    if (subs(ind + 1, arr, ans, s, sum))
        return true;

    return false;
}
int main()
{
    int sum, n;
    cout << "Enter size of array\n";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter required sum\n";
    cin >> sum;
    vector<int> ans;
    if(subs(0, arr, ans, 0, sum)==false){
        cout<<"Not found\n";
    }
   
    return 0;
}