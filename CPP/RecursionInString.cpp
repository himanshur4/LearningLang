// 1.REVERSE OF A STRING
#include <bits/stdc++.h>
using namespace std;
// void reverse(string &st, int s, int e)
// {
//     if (s > e)
//         return;
//     else
//     {
//         swap(st[s], st[e]);
//         s++;
//         e--;
//         reverse(st, s, e);
//     }
// }
bool palindrome(string &str, int st, int end)
{
    if (st > end)
        return 1;
    if (str[st] != str[end])
        return 0;
    st++;
    end--;
    palindrome(str, st, end);
}
int main()
{
    string str;
    cin >> str;
    // reverse(str, 0, str.length() - 1);
    // cout<<str<<endl;
    if (palindrome(str, 0, str.length() - 1))
        cout << "Valid\n";
    else
        cout << "Not Valid";
    return 0;
}