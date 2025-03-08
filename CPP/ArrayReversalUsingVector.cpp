// #include <bits/stdc++.h>
// using namespace std;
// vector<int> reverse(vector<int> v)
// {
//     int start = 0, end = v.size()-1;
//     while (start <= end)
//     {
//         swap(v[start], v[end]);
//         // start++;
//         end--;
//     }
//     return v;
// }
// void print(vector<int> v1)
// {

//     for (int i : v1)
//     {
//         cout << i << " ";
//     }
// }
// int main()
// {void countingSort(vector<int>& arr, int n, int exp) 
{ 
    int output[n]; 
    int count[10] = {0}; 
  
    for (int i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
  
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (int i = n - 1; i >= 0; i--) { 
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
  
    for (int i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
  
void radixsort(vector<int>& arr) 
{ 
    int n = arr.size(); 
    int m = *max_element(arr.begin(), arr.end()); 
  
    for (int exp = 1; m / exp > 0; exp *= 10) 
        counting
//     vector<int> v;
//     v.push_back(12);
//     v.push_back(1);
//     v.push_back(82);
//     v.push_back(16);
//     v.push_back(22);
//     cout << "\nBefore reversal \n";
//     print(v);
//    vector<int>v1= reverse(v);
//     cout << "\nafter reversal \n";
//     print(v1);
//     return 0;
// }