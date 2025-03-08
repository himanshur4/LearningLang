#include<bits/stdc++.h>
using namespace std;
//also a bitwise operator
int main()
{int a,b;
cin>>a>>b;
//a<<b mean left shifting of a by b bit and it means (a*2^b)
cout<<"a<<b is :"<<(a<<b)<<endl;
//a>>b mean right shifting of a by b bit and it means (a/2^b)
cout<<"a>>b is :"<<(a>>b)<<endl;
return 0;
}