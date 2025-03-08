#include <bits/stdc++.h>
using namespace std;
int update(int **ptr)
{
    //ptr++;//NO CHANGE in main()
  // (*ptr)++;//NO CHANGE IN POINTER OF main()
  //always use bracket in  writing **ptr++ or *ptr++, otherwise it gives location to undesired address
 (**ptr)++;//CHANGE IN THE VALUE INSIDE main() also
}
int main()
{
    int x = 47;
    int *p = &x;
    int **p2 = &p; // p2 stores the address of pointer,p to the x
    int ***p3=&p2;
    int ***p4=p3;//copying of pointer
    cout<<&x<<endl;//address of x
    cout<<p<<endl;//address of x
    cout<<&p<<endl;//address of pointer 'p'
    cout<<p2<<endl;//address of pointer 'p'
    cout<<**p3<<endl;
    cout<<p4<<" "<<p3<<endl;
 
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<***p3<<endl;
    cout<<***p4<<endl;
    cout << "\nBefore: " <<**p2 << endl;
    update(&p); // transferring the address of pointer to x,which was initially stored by p2
    cout << "\nAfter: " <<**p2 << endl;
    

    return 0;
}