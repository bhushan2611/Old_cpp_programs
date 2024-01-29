#include <bits/stdc++.h>
using namespace std;
// vector<int> duplicates(long long arr[], int n)
// {
//     // code here
//     int a[100000] = {0};
//     vector<int> v;
//     int flag = 1;
//     for (int i = 0; i < n; i++)
//     {
//         a[arr[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 1)
//         {
//             v.push_back(i);
//             flag = 0;
//         }
//     }
//     if (flag)
//     {
//         return v.push_back(-1);
//     }
//     else
//         return v;
// }
    vector<int> duplicates(int arr[], int n) {
        // code here
        int a[n] = {};
        vector<int> v;
        int flag = 1;
        for (int i = 0; i < n; i++)
            a[arr[i]]++;
    
        for (int i = 0; i < n; i++)
            if (a[i] > 1)
            {
                v.push_back(i);
                flag = 0;
            }
    
        if (flag)
            v.push_back(-1);
    
        return v;
    }
};
int main()
{
    vector<int> v(5);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}