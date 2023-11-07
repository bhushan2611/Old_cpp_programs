#include <bits/stdc++.h>
using namespace std;

int majorityEle(int arr[], int n)
{
    // int N=1e5;
    // int newArr[N] = {};
    // for (int i = 0; i < n; i++)
    // {
    //     newArr[arr[i]]++;
    //     if (newArr[arr[i]] > n / 2)
    //         return arr[i];
    // }
    // return -1;
    int c=1,val=arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == val)
            c++;
        else
            c--;
        if(c==0){
            val = arr[i];
            c++;
        }
    }
    c=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == val)
            c++;
    }
    if(c> (n/2))
        return val;
    else 
        return -1;
}
int main()
{
    int a[] = {3,1,3,3,2};
    int size = sizeof(a) / sizeof(a[0]);
    cout << majorityEle(a, size);
    return 0;
}