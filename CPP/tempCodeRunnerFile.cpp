
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