#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    float ans = 0; // int doesn't give accurate value as of float
    /*1. Decimal To Binary
    while (n != 0)
        {int bit=n&1;
            ans = (bit * pow(10, i)) + ans;//formula to form any integer,,n&1 gives the bitwise digit
            n = n >> 1;
            i++;
        }
        cout << ans;
        
   2. binary to decimal
    while (n != 0)
    {ans+=(n%10)*pow(2,i);
    n/=10;
        i++;
    }cout<<ans;*/
    return 0;
}