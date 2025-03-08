// // you have to find the frequency of k numbers(taken in input) in the n-sized array in O(n) time complexity if 0<=arr[i]<=20
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter size of array:\n";
//     cin >> n;
//     int arr[n];
//     int hash[21] = {0}; // maximum size of array to be declared must be <= 10^6 if it is inside main but it can be of 10^7 if it is declared globally
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         hash[arr[i]]++;
//     }
//     int k;
//     cout << "Enter number of test cases\n";
//     cin >> k;
//     cout<<"Enter number whose frequency is needed\n";
//     while (k--)
//     {
//         int num;
//         cin >> num;
//         cout << hash[num] << endl;
//     }
//     return 0;
// }

// by using map of stl(time complexity of logn in all cases)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array:\n";
    cin >> n;
    int arr[n];
    map<int,int>mpp;//it stores in sorted array and the problem while creating hash array of more size is resolved it takes logn time in storing in each type of cases
    //or using unordered map which uses time complexity of O(1) in storing and fetching in average and best cases and of order O(n) in worst cases
    //map<char,int>mpp2 (for character's frequency)
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int k;
    cout<<"enter number of test cases:\n";
    cin>>k;
    while(k--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}
