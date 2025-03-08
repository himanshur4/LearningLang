// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a = 1, b = 2;
//     /*if(a-->0 && ++b>2) cout<<"Inside if"<<endl;
//     else cout<<"Inside else"<<endl;
//     cout<<a<<" "<<b\n;

//     if(a-->0||++b>2)  cout<<"Inside if"<<endl;
//     //very important: only one condition must be true for || so it wouldn't check whether 2nd condition is true or not
//     else cout<<"Inside else"<<endl;
//     cout<<a<<" "<<b;

//     int c,d=1;
//     c=10;
//     if(c++) cout<<d;//any non zero number inside if has truth value 1,so if condition gets executed
//     else cout<<++d;*/

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//             cout << i << " " << j << endl;
//         }
//     }

//     return 0;
// }

// 2.   NUMBER OF PRIME NUMBERS PRESENT LESS THAN THAT PARTICULAR NUMBER
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number:\n";
    cin >> n;
    vector<bool> prime(n, 1);
    prime[0] = 0;
    prime[1] = 0;
    int cnt = 0;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            cnt++;
            for (int j = i * 2; j < n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
cout<<"Total Prime Number Less than "<<n<<" is: "<<cnt;
    return 0;
}
