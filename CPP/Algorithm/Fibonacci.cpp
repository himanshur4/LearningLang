/*#include<bits/stdc++.h>
using namespace std;

int main()
{int n;
cout<<"Enter n\n";
cin>>n;
int fib[n+1];
fib[0]=0;
fib[1]=1;
for(int i=2;i<=n;i++){
    fib[i]=fib[i-1]+fib[i-2];
}
for(int i=0;i<=n;i++){
cout<<fib[i]<<" ";
}
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int memo[1000] ;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    if (memo[n] !=0)
    {
        return memo[n];
    }
    else
    {
        memo[n] = fib(n - 1) + fib(n - 2);
        return memo[n];
    }
}
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}