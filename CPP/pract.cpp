#include <bits/stdc++.h>
using namespace std;
void subsequences(int ind,vector<int>arr,vector<int>ans){
    if(ind>=arr.size()){
        for(int i:ans){
            cout<<i<<" ";

        }cout<<endl;
        return;
    }
    
    ans.push_back(arr[ind]);
    subsequences(ind+1,arr,ans);
    ans.pop_back();
    subsequences(ind+1,arr,ans);
}
int main()
{
    vector<int> arr(3);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    subsequences(0,arr,{});
    return 0;
}