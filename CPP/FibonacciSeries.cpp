#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    int sum;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    
    return 0;
}