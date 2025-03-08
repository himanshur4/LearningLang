#include <bits/stdc++.h>
using namespace std;
class q
{
    int s, e;
    static const int MAX = 10;
    int arr[MAX];

public:
    q(){
        s=-1,e=-1;
    }
    void push(int x){
        if(e>=MAX-1){
            cout<<"Queue Overflow";
            return;
        }
        if(s==-1&&e==-1){
            s++;
            e++;
            arr[s]=x;
            return;
        }
        arr[++e]=x;
        

    }
    int pop(){
        if(s>e||s==-1){
            cout<<"Queue empty";
            return -1;
        }
        return arr[s++];
    }
    int size(){
        if(s==-1&&e==-1){
            
            return 0;
        }
        return e-s+1;
    }
    int top(){
        if(s==-1){
            cout<<"Queue empty";
            return -1;
        }
        return arr[s];
    }
};
int main()
{
    return 0;
}
class q
{
    int s, e;
    static const int MAX = 10;
    int arr[MAX];

public:
    q(){
        s=-1,e=-1;
    }
    void push(int x){
        if(e>=MAX-1){
            cout<<"Queue Overflow";
            return;
        }
        if(s==-1&&e==-1){
            s++;
            e++;
            arr[s]=x;
            return;
        }
        arr[++e]=x;
        

    }
    int pop(){
        if(s>e||s==-1){
            cout<<"Queue empty";
            return -1;
        }
        return arr[s++];
    }
    int size(){
        if(s==-1&&e==-1){
            
            return 0;
        }
        return e-s+1;
    }
    int top(){
        if(s==-1){
            cout<<"Queue empty";
            return -1;
        }
        return arr[s];
    }
};