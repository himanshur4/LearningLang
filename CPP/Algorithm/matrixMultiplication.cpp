/*#include<bits/stdc++.h>
using namespace std;

int main()
{int m1,n1,m2,n2;
cout<<"Enter order of matrix 1\n";
cin>>m1>>n1;
cout<<"Enter order of matrix 2 (n1=m2)\n";
cin>>m2>>n2;
int arr2[m2][n2];
int arr1[m1][n1];
cout<<"enter elements of array1\n";
for(int i=0;i<m1;i++){
    for(int j=0;j<n1;j++){
        cin>>arr1[i][j];
    }
}

cout<<"enter elements of array2\n";
for(int i=0;i<m2;i++){
    for(int j=0;j<n2;j++){
        cin>>arr2[i][j];
    }
}
int c1[m1][n2];
cout<<"Product:\n";
for(int i=0;i<m1;i++){
    for(int j=0;j<n2;j++){
         c1[i][j]=0;
        for(int k=0;k<m2;k++){
            c1[i][j]+=arr1[i][k]*arr2[k][j];
        }
        cout<<c1[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}*/

/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m1, m2,k;
    cout << "Enter order of matrix \n";
    cin >> m1 >> n1;
    int arr[m1][n1];
    cout << "enter scalar element\n";
    cin>>k;
    cout<<"enter elements of array\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout<<"Scalar product of the matrix is:\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
           cout<< arr1[i][j]*k<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*
#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

Matrix add(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}

Matrix subtract(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

Matrix karatsubaMultiply(const Matrix &A, const Matrix &B) {
    int n = A.size();
    if (n == 1) {
        return {{A[0][0] * B[0][0]}};
    }

    int newSize = n / 2;
    Matrix A11(newSize, vector<int>(newSize));
    Matrix A12(newSize, vector<int>(newSize));
    Matrix A21(newSize, vector<int>(newSize));
    Matrix A22(newSize, vector<int>(newSize));
    Matrix B11(newSize, vector<int>(newSize));
    Matrix B12(newSize, vector<int>(newSize));
    Matrix B21(newSize, vector<int>(newSize));
    Matrix B22(newSize, vector<int>(newSize));

    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + newSize];
            A21[i][j] = A[i + newSize][j];
            A22[i][j] = A[i + newSize][j + newSize];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + newSize];
            B21[i][j] = B[i + newSize][j];
            B22[i][j] = B[i + newSize][j + newSize];
        }
    }

    Matrix M1 = karatsubaMultiply(add(A11, A22), add(B11, B22));
    Matrix M2 = karatsubaMultiply(add(A21, A22), B11);
    Matrix M3 = karatsubaMultiply(A11, subtract(B12, B22));
    Matrix M4 = karatsubaMultiply(A22, subtract(B21, B11));
    Matrix M5 = karatsubaMultiply(add(A11, A12), B22);
    Matrix M6 = karatsubaMultiply(subtract(A21, A11), add(B11, B12));
    Matrix M7 = karatsubaMultiply(subtract(A12, A22), add(B21, B22));

    Matrix C11 = add(subtract(add(M1, M4), M5), M7);
    Matrix C12 = add(M3, M5);
    Matrix C21 = add(M2, M4);
    Matrix C22 = add(subtract(add(M1, M3), M2), M6);

    Matrix C(n, vector<int>(n));
    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize; ++j) {
            C[i][j] = C11[i][j];
            C[i][j + newSize] = C12[i][j];
            C[i + newSize][j] = C21[i][j];
            C[i + newSize][j + newSize] = C22[i][j];
        }
    }

    return C;
}

int main() {
    Matrix A = {{1, 2}, {3, 4}};
    Matrix B = {{5, 6}, {7, 8}};

    Matrix C = karatsubaMultiply(A, B);

    for (const auto &row : C) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    priority_queue<pair<int, int>> maxHeap;
    for (auto& [num, count] : freq) {
        maxHeap.push({count, num});
    }

    vector<int> result;
    pair<int, int> prev = {-1, 0};

    while (!maxHeap.empty()) {
        auto [count, num] = maxHeap.top();
        maxHeap.pop();
        result.push_back(num);

        if (prev.first > 0) {
            maxHeap.push(prev);
        }

        prev = {count - 1, num};
    }

    if (result.size() != nums.size()) {
        return {}; // Not possible to rearrange
    }

    return result;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    vector<int> result = rearrangeArray(nums);

    if (result.empty()) {
        cout << "Not possible to rearrange" << endl;
    } else {
        for (int num : result) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
*/