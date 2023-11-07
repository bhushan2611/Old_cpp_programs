#include <bits/stdc++.h>
using namespace std;
// vector<int> leaders(int arr[], int n)
// {
//     vector<int> v1;
//     int max = arr[0], index = 0;
//     for (int i = index + 1; i < n - 1; i = index + 1)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (max < arr[j])
//             {
//                 max = arr[j];
//                 index = j;
//             }
//         }
//         v1.push_back(max);
//         max = arr[index + 1];
//     }
//     v1.push_back(max);
//     return v1;
// }

vector<int> leaders(int arr[], int n)
{
    vector<int> v1;
    int max = arr[n-1];
    v1.push_back(max);
    for (int i = n - 2; i >= 0; i--)
    {
        if (max < arr[i])
        {
            max = arr[i];
            v1.push_back(max);
        }
    }
    reverse(v1.begin(), v1.end());
    return v1;
}
int main()
{
    int A[] = {1,2,3,4,0}; // 60 40 10 8 3
    int size = sizeof(A) / sizeof(A[0]);
    vector<int> v;
    v = leaders(A, size);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}