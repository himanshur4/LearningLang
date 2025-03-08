#include <bits/stdc++.h>
using namespace std;
#define pi 3.14 // macros

inline int getMax(int &a, int &b) // the function of 1 or 2 line can be made inline function in which no function call is required
{
    return (a > b) ? a : b; // tertiary operator
}
void print(int arr[],int size,int startIndex=0)// startindex is default arguement it will start processing with zero if no value is given
{
    for(int i=startIndex;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int r = 7;
    cout << "The Area is " << pi * r * r;
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b); // it is inline function,no function call is required as it processes before compilation
    cout << endl
         << ans << endl;
    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout << ans << endl;
    int arr[5]={1,2,3,4,5};
    print(arr,5);//here no error is shown even if no value is being passed in the print function for the startindex arguement
    return 0;
}