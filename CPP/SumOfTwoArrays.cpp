#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "enter size of both arrays:\n";
    cin >> m >> n;
    int arr1[m], arr2[n];
    cout << "Enter elements of both the arrays(each element is of one digit number):\n";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int carry = 0, sum = 0;
    stack<int> st;
    int i = m - 1, j = n - 1;
    while ((i >= 0) && (j >= 0))
    {
        sum = (arr1[i] + arr2[j] + carry) % 10;
        carry = (arr1[i] + arr2[j] + carry) / 10;
        st.push(sum);
        i--;
        j--;
    }
    if (m > n)
    {
        while (i >= 0)
        {
            st.push((carry + arr1[i]) % 10);
            carry = (arr1[i] + carry) / 10;
            i--;
        }
    }
    else if (n > m)
    {
        while (j >= 0)
        {
            st.push((carry + arr2[j]) % 10);
            carry = (arr2[j] + carry) / 10;
            j--;
        }
    }
    if (carry != 0)
    {
        st.push(carry);
    }
    cout << "The Sum of the two Arrays is:\n";
    int x = st.size();
    for (int i = 0; i < x; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}