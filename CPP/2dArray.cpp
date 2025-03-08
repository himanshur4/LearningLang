// //1. FINDING MAXIMUM ROWSUM AND COLUMNSUM INDEX
// #include <bits/stdc++.h>
// using namespace std;
// int Maxrowsum(int arr[][3])
// {
//     int sum = 0;
//     int rowIndex=-1;
//     int maxi = -1;
//     for (int i = 0; i < 3; i++)
//     {   sum=0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//         if (sum > maxi)
//         {
//             maxi = sum;
//             rowIndex = i;
//         }
//     }
//     return rowIndex;
// }
// int Maxcolsum(int arr[][3])
// {
//     int sum = 0;
//     int maxi = -1;
//     int colinex;

//     for (int j = 0; j < 3; j++)
//     {sum=0;
//         for (int i= 0; i < 3; i++)
//         {
//             sum += arr[i][j];

//         }
//         if (sum > maxi)
//         {
//             maxi = sum;
//             colinex = j;
//         }
//     }
//     return colinex;
// }
// int main()
// {

//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int n = Maxrowsum(arr);
//     cout << "\nThe maximum sum is at row of index :" << n << endl;
//     int m=Maxcolsum(arr);
//     cout << "\nThe maximum sum is at column of index :" << m << endl;

//     return 0;
// }

// // 2.PRINTING LIKE A WAVE

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (j & 1)
//         {
//             for (int i = m-1; i >= 0; i--)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }

//     return 0;
// }

// // 3.SPIRAL WAVE TRAVERSAL

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     vector<int> ans;
//     int count = 0;
//     int sr = 0;
//     int sc = 0;
//     int max = m * n;
//     int er = m - 1;
//     int ec = n - 1;
//     while (count < max)
//     {
//         for (int i = sc; count < max && i <= ec; i++)
//         {
//             ans.push_back(arr[sr][i]);
//             count++;
//         }
//         sr++;
//         for (int i = sr; count < max && i <= er; i++)
//         {
//             ans.push_back(arr[i][ec]);
//             count++;
//         }
//         ec--;
//         for (int i = ec; count < max && i >= sc; i--)
//         {
//             ans.push_back(arr[er][i]);
//             count++;
//         }
//         er--;
//         for (int i = er; count < max && i >= sr; i--)
//         {
//             ans.push_back(arr[i][sc]);
//             count++;
//         }
//         sc++;
//     }
//     for(int i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// // 4.BINARY SEARCH (1)[using linear conversion]

// #include <bits/stdc++.h>
// using namespace std;
// bool binarySearch(int arr[][4], int target)
// {
//     int start = 0;
//     int end = 15;//total row*total column -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         int element = arr[mid / 4][mid % 4]; // element =arr[mid/totalRow][mid%totalColumn]
//         if (element == target)
//         {
//             return 1;
//         }
//         else if (element < target)
//         {
//             start++;
//         }
//         else
//         {
//             end--;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return 0;
// }
// int main()
// {

//     int arr[4][4];
//     cout << "Enter sorted 2d array(4X4 size)(the last element of previous row is less than the first element of that row):\n";
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int key;
//     cout << "Enter target element to be found\n";
//     cin >> key;
//     if (binarySearch(arr, key))
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not found\n";
//     }
//     return 0;
// }

// // 5.BINARY SEARCH (2)  {element is sorted both row-wise andd column-wise but not necessarily linear memory-wise}

// #include <bits/stdc++.h>
// using namespace std;
// bool binarySearch2(int arr[][4], int target)
// {
//     int rowindex = 0, colIndex = 3;
//     while (rowindex <= 3 && colIndex >= 0)
//     {
//         if (arr[rowindex][colIndex] == target)
//         {
//             return 1;
//         }
//         else if (arr[rowindex][colIndex] > target)
//             colIndex--;
//         else
//             rowindex++;
//     }
//     return 0;
// }
// int main()
// {

//     int arr[4][4];
//     cout << "Enter the 2d array in which element is sorted both row-wise andd column-wise but not necessarily linear memory-wise\n";
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int key;
//     cout << "Enter target element to be found\n";
//     cin >> key;
//     if (binarySearch2(arr, key))
//     {
//         cout << "Found" << endl;
//     }
//     else
//     {
//         cout << "Not found\n";
//     }
//     return 0;
// }

// 6.ROTATE A 2D MATRIX BY 90 DEGREE CLOCKWISE(INPLACE SORTING)