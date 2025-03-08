#include<bits/stdc++.h>
using namespace std;
//value of number after converting it into binary or bit
//negative value of any number is printed only after conversion into 2's complement
//bitwise operator me bracket lagaana necessary hai
int main()
{int a,b,c,d;
cin>>a>>b;
cout<<"a&b is : "<<(a&b)<<endl;//bitwise and operator
cout<<"a|b is : "<<(a|b)<<endl;//bitwise or operator
cout<<"~a is : "<<~a<<endl;//bitwise not operator
cout<<"a^b is : "<<(a^b)<<endl;//bitwise xor operator

return 0;
}