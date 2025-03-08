#include<bits/stdc++.h>
using namespace std;
void update1(int &j){
    j++;
}
int main()
{/*int x=89;
int y=x;//the value of x is copied to a new memory block named y
int&z=x;//Both the variables,z and  x are pointing to the same memory block
cout<<x<<endl;
x++;
cout<<z<<endl;
x++;
cout<<z<<endl;
z++;
cout<<x<<endl;*/
int n=78;
cout<<"\nBefore value of n: "<<endl;
update1(n);
cout<<"After value of n: "<<endl;
cout<<n<<endl;
return 0;
}