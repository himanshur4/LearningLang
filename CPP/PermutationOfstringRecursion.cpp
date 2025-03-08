#include <bits/stdc++.h>
using namespace std;
void solve(string str, int index, vector<string> &ans)
{
    if (index >= str.size())
    {
        ans.push_back(str);
        return;
    }
    for (int j = index; j < str.length(); j++)
    {
        swap(str[j], str[index]);
        solve(str, index + 1, ans);
        // backtracking
        swap(str[j], str[index]);
    }
}
int main()
{
    cout << "Enter the String:\n";
    string str;
    cin >> str;
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);
    cout << "Its Permutation is:\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
} 