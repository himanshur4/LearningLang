#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(arr, output, index + 1, ans);
    // include
    int element = arr[index];
    output.push_back(element);
    solve(arr, output, index + 1, ans);
}

int main()
{
    int n, el;
    vector<int> ar;
    cout << "Enter the number of elements in the set\n";
    cin >> n;
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> el;
        ar.push_back(el);
    }
    vector<vector<int>> ans ;
    vector<int> output;
    int index = 0;
    solve(ar, output, index, ans);
    cout << "Its power set is\n";
    for (int i = 0; i < ans.size(); i++)// METHOD TO TRASVERSE A VECTOR CONSISTING OF MANY VECTORS(VECTOR OF VECTORS/2D VECTOR)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// void solve(string str, string output, int index, vector<string> &ans)
// {
//     if (index >= str.length())
//     {
//         if (output.length() >0)
//         {
//             ans.push_back(output);
//         }
//         return;
//     }
//     solve(str,output,index+1,ans);
//     char ch=str[index];
//     output.push_back(ch);
//     solve(str,output,index+1,ans);
// }
// int main()
// {
//     string str;
//     cout << "Enter the string\n";
//     cin >> str;
//     vector<string> ans;
//     string output = "";
//     solve(str, output,0, ans);
//     cout<<"Its Substring is:\n";
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }