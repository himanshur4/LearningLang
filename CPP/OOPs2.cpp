// #include <bits/stdc++.h>
// using namespace std;
// class human
// {
// public:
//     int age;
//     int height;

// protected://protected mode data of a super class will be accessible only in its sub class
//     char *name;

// public:
//     void setage(int age)
//     {
//         this->age = age;
//     }
//     int getage()
//     {
//         return this->age;
//     }
// };
// class male : public human
// {
// public:
//     string color;
//     void sleep()
//     {
//         cout << "male is sleeping\n";
//     }
// public:
//     void setage(int age)
//     {
//         this->age = age;
//     }
//     int getage()
//     {
//         return this->age;
//     }
//     male(){
//         name=new char[100];
//     }
//     void setname(char arr[])
//     {
//         char *ch = new char[strlen(arr) + 1];
//         strcpy(ch,arr);
//         strcpy(this->name, ch);
//     }
//     string getname()
//     {
//         return this->name;
//     }
// };
// int main()
// {
//     male m1;
//     char name[9] = "Himanshu";
//     m1.setname(name);
//     cout << m1.getname() << endl;

//     return 0;
// }

// 2. MULTI-LEVEL INHERITANCE
// 3. MULTIPLE INHERITANCE

#include <bits/stdc++.h>
using namespace std;
class animal
{
protected:
    int age;
    int w;
};
class human
{
protected:
    int height;
};
class hybrid : private animal, private human
{
public:
    int getage()
    {
        return this->age;
    }
    void setage(int a)
    {
        this->age = a;
    }
};
int main()
{
    hybrid h1;
    h1.setage(67);
    cout << h1.getage();
    return 0;
}