#include <bits/stdc++.h>
using namespace std;
void duplicates(int arr[], int n)
{
    // code here
    int N = 1e5;
    vector<int> v(N, 0);
    vector<int> a;

    for (int i = 0; i < n; i++)
        v[arr[i]]++;

    // int cnt = 0;
    v.shrink_to_fit();
    // for (int i = 0; i < v.size(); i++)
    //     if (v[i] > 1)
    //         a[cnt++] = i;
    // a.shrink_to_fit();
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    
    // return a;
}
int main()
{
    int arr[] = {2, 3, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    // vector<int> v1;
    // v1 = duplicates(arr, size);
    // for (int i = 0; i < v1.size(); i++)
    //     cout << v1[i] << " ";
    duplicates(arr,size);
    return 0;
}