#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    char str2[34];
    cin >> str1;
    cin >> str2;
    str1[2] = '\0'; // it simply doesn't print any value at the null character memory block and remains continue for the next
    str2[2] = '\0'; // null character ke baad terminate ho jaata for all the other next memory block
    // after using space bar or tab bar or new line character(enter) while taking input by cin in both string and char array terminates and put null character in such a way that no new character printing takes place for further memory block
    cout << str1 << endl;
    cout << str2 << endl;
    // string str1;
    // getline(cin, str1);//don't use cin if you need space bar in taking input in the string, use getline in the given format instead
    // cout << str1<<endl;
    // char str2[78];
    // cin.getline(str2,78);// if you need space bar in taking input in the char array, use getline in the given format instead
    // cout<<str2;
    //     int count=356;
    // string str=to_string(count);//logic to change any number into characterwise string
    // string str2 = "";
    // for (char ch : str)//method to accessing any element belonging to string str and doing operation like traversing,pushback,etc.
    // {
    //     str2.push_back(ch);
    // }
//stoi() function changes a string into a number(Complete string has to be changed, not individual element of the string)
    // return []
    
}