#include <bits/stdc++.h>
using namespace std;

// vector<int> max_of_subarrays(int *arr, int n, int k) // time complexity = O(k*(n-k+1))
// {
//     // your code here
//     vector<int> v;
//     int i = 0, j = k - 1;
//     while (j < n)
//     {
//         int max = arr[i];
//         for (int a = i + 1; a <= j; a++)
//             if (max < arr[a])
//                 max = arr[a];
//         v.push_back(max);
//         i++;
//         j++;
//     }
//     return v;
// }

// int* max_of_subarrays(int *arr, int n, int k) // time complexity = O(n) (using array)
// {
//     int v[n-k+1];
//     int i = 0, j = k - 1;
//     int max = arr[0];
//     for (int a = 1; a < k; a++)
//         if (max < arr[a])
//             max = arr[a];
//     v[0] = max;
//     i++;
//     j++;
//     int count = 0;
//     while (j < n)
//     {
//         if (v[count] >= arr[j]){
//             count++;
//             v[count] = v[count - 1];
//         }
//         else{
//             count++;
//             v[count] = arr[j];
//         }
//         i++;
//         j++;
//     }
//     for (int i = 0; i <= n-k; i++)
//         arr[i]=v[i];
//     return arr;
// }

vector<int> max_of_subarrays(int *arr, int n, int k) // time complexity = O(n) (using vector)
{
    vector<int> v;
    int i = 0, j = k - 1;
    int max = arr[0];
    for (int a = 1; a < k; a++)
        if (max < arr[a])
            max = arr[a];
    v.push_back(max);
    j++;
    int count = 0;
    while (j < n)
    {
        if (v[count] >= arr[j])
        {
            count++;
            v.push_back(v[count - 1]);
        }
        else
        {
            count++;
            v.push_back(arr[j]);
        }
        j++;
    }
    return v;
}
int main()
{
    int arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    // int *v;                                // using array
    // v = max_of_subarrays(arr, size, k);
    // for (int i = 0; i <= size - k; i++)
    //     cout << v[i] << " ";

    vector<int> v1;                           // using vector
    v1 = max_of_subarrays(arr, size, k);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    return 0;
}