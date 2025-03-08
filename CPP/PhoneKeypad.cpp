#include <bits/stdc++.h>
using namespace std;
void solve(string digit, string output, int index, vector<string> &ans, string map[])
{
    if (index >= digit.length())
    {
        ans.push_back(output);
        return;
    }
    int num = digit[index] - '0';
    string value = map[num];
    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digit, output, index + 1, ans, map);
        output.pop_back();
    }
} 

int main()
{
    cout << "Enter the number (in form of string)\n";
    string digit;
    cin >> digit;
    string output = "";
    int index = 0;
    vector<string> ans;
    string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digit, output, index, ans, map);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}