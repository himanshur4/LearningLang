#include <bits/stdc++.h>
using namespace std;
// int gcd(int a, int b)//naive approach(very slow)
// {
//     int ans=1;
//     for (int i = 1; i <= min(a, b); i++)
//     {
//         if ((a % i == 0) && (b % i == 0))
//             {ans = i;}
//     }
//     return ans;
// }

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else if (a == 0)
        return b;
    else if (a > b)
        return gcd(b, a%b);
    else if (a < b)
        return gcd(b%a,a);
    else if(a==b)
        return a;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int an = gcd(x, y);
    cout << "GCD: " << an;
    return 0;
}