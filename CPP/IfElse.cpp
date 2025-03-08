#include <iostream>
using namespace std;

int main()
{
    // multiple if se new line generate nahi hota
    char ch;
    cin >> ch;
    int a = 22;
    int b = a + 1;
    if ((a = 23) == b)
        cout << a;

    if (ch >= 97 && ch <= 122)
    {
        cout << "This is a lowercase letter";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "THIS IS A UPPERCASE LETTER";
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "This is a number between 0 to 9";
    }

    return 0;
}