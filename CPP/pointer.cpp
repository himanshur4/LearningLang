#include <bits/stdc++.h>
using namespace std;
void update(int *ptr)
{
    // ptr=ptr+1;
    *ptr = *ptr + 3;
}
int main()
{
    int p = 90;
    char ch = 'h'; // cout doesn't stores the address of character in form of pointer and the pointer keeps printing the value until null character is found
    //     char arr[6]="abcde";
    //     int array[5]={2,3,4,5,6};
    //     cout<<array<<endl;//cout gives the value of the pointer in hexadecimal format
    //     cout<<arr<<endl;//cout doesn't store the base address of character array in cpp
    //     printf("%d\n",arr);
    //     char *ptr=&arr[0];
    //     cout<<ptr<<endl;
    //     cout<<*(ptr+2)<<endl;
    // int *pt = &p;
    // cout << "Before: address and value is: " << pt << " " << *pt;
    // update(&p);
    // cout << "\nAfter: address and value is: " << pt << " " << *pt;
    char *ptt = &ch;
    char **ptt2 = &ptt;
    // cout << ptt2 << endl;
    // cout << *ptt2 << endl;
    cout << *ptt << endl;
    cout << ptt << endl;
    (**ptt2)++;
    cout << *ptt2 << endl;
    cout << **ptt2 << endl;
    return 0;
}
