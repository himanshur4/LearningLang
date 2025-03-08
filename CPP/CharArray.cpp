#include <bits/stdc++.h>
using namespace std;
char toLower(char ch)
{ // function to convert capital letter into small letter
    if ((ch >= 'A') && (ch <= 'Z'))
        return 'a' + (ch - 'A');
    else
        return ch;
}
int lenstr(char arr[])
{
    int count = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
        count++;
    }
    return count;
}//aliter: strlen(array) for character array only and length.str() for string
string revstr(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}//aliter: strrev(string),but valid only for character array, not for string data type //function to be used in c++ to reverse a string
bool palindromeCheckForWord(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        if (tolower(arr[start]) != tolower(arr[end]))
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char name[20];
    cin >> name;
    name[9] = '\0';
    cout << "your name is " << name << endl;

    cout << "Length of String is " << lenstr(name) << endl;
    cout << "Reverse of string is " << revstr(name, lenstr(name)) << endl;
    cout << "truth value for palindrome check is " << palindromeCheckForWord(name, lenstr(name));
    return 0;
}