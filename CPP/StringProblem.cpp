
// //// 1. VALID PALINDROME CHECK
// #include <bits/stdc++.h>
// using namespace std;
// bool validCharacter(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
// char toLowercase(char ch)
// {
//     if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
//         return ch;
//     else
//         return 'a' + (ch - 'A');
// }
// bool CheckPalindrome(string st)
// {
//     int s = 0;
//     int e = st.length() - 1;
//     while (s <= e)
//     {
//         if (st[s] != st[e])
//         {
//             return 0;
//         }
//           s++;
//           e--;
//     }
//     return 1;
// }

// int main()
// {
//     string str;
//     cout << "Enter the string to check palindrome\n";
//     cin >> str;
//     string temp = "";
//     for (int i = 0; i < str.length(); i++)
//     {
//         if (validCharacter(str[i]))
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     for (int i = 0; i < temp.length(); i++)
//     {
//         temp[i] = toLowercase(temp[i]);
//     }
//     cout <<"In real checking of\n" <<temp<<endl;
//     if (CheckPalindrome(temp))
//     {
//         cout << "Valid Palindrome\n";
//     }
//     else
//     {
//         cout << "Not valid Palindrome\n";
//     }
//     return 0;
// }

// 2. FIND MAXIMUM OCCURING CHARACTER IN A WORD

// #include <bits/stdc++.h>
// using namespace std;
// char maxOccChar(string str)
// {
//     int arr[26] = {0};
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         int num = 0;
//         if ((str[i] >= 'a') && (str[i] <= 'z'))
//         {

//             num = str[i] - 'a';
//             arr[num]++;
//         }
//         else
//         {
//             num = str[i] - 'A';
//             arr[num]++;
//         }

//         i++;
//     }
//     int maxi = -1, ans = 0;
//     for (int j = 0; j < 26; j++)
//     {
//         if (arr[j] > maxi)
//         {
//             maxi = arr[j];
//             ans = j;
//         }
//     }
//     char chh = 'a' + ans;
//     return chh;
// }

// int main()
// {
//     string str;
//     cin >> str;
//     cout << maxOccChar(str);
//     return 0;
// }

// 3. TAKING STRING INPUT WITH SPACING AND REPLACE SPACE IN STRING WITH "@40"
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     getline(cin,str);
//     string p="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]==' ') {p.push_back('@');
//         p.push_back('4');
//         p.push_back('0');}
//         else p.push_back(str[i]);

//     }
//     cout<<p<<endl;
// }

// //4.PERMUTATION IN A STRING

// #include <bits/stdc++.h>
// using namespace std;
// bool isequal(int arr1[], int arr2[])
// {
//   for (int i = 0; i < 26; i++)
//   {
//     if (arr1[i] != arr2[i])
//       return 0;
//   }
//   return 1;
// }
// bool ispermutationpresent(string s1, string s2)
// {
//   int c1[26] = {0};
//   int c2[26] = {0};
//   for (int i = 0; i < s2.length(); i++)
//   {
//     int index = s2[i] - 'a';
//     c2[index]++;
//   }
//   int j = 0;
//   while (j < s1.length() && j < s2.length())
//   {
//     int index = s1[j] - 'a';
//     c1[index]++;
//     j++;
//   }
//   if (isequal(c1, c2))
//     return 1;
//   while (j < s1.length())
//   {
//     int newi = s1[j] - 'a';
//     c1[newi]++;
//     int oldchar = s1[j - s2.length()] - 'a';
//     c1[oldchar]--;
//     j++;
//     if (isequal(c1, c2))
//       return 1;
//   }
//   return 0;
// }
// int main()
// {
//   string s1, s2;
//   cout << "Enter the string\n";
//   cin >> s1;
//   cout << "Enter the substring\n";
//   cin >> s2;
//   if (ispermutationpresent(s1, s2))
//     cout << "Present";
//   else
//     cout << "Not Present";
// }

// //5.COMPRESSION OF A STRING

// //to  write the character of the string and the number of repetition(counting) of that character in next index of the same array,if the character doesn't repeat i.e. it repeats only one time then don't write its index in that array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string str;
//     cin>>str;
//     int n=str.length();
//     int ansIndex=0;
//     int i=0;
//     while(i<n){
//         str[ansIndex++]=str[i];
//         int j=i+1;
//         while(j<n&&str[i]==str[j]){
//             j++;
//         }
//         int count=j-i;
//         if(count>1){
//             string str2=to_string(count);
//             for(char ch:str2){
//                 str[ansIndex++]=ch;
//             }
//         }
//         i=j;
//     }str[ansIndex]='\0';
//     i=0;
//    // cout<<str;
//    while(str[i]!='\0'){
//    cout<<str[i]<<" ";
//     i++;
//    }
//    return 0;
// }