#include<bits/stdc++.h>
using namespace std;
int FirstElementKTimes(int a[], int n, int k){
    int hsh[200]={};
    for (int i = 0; i < n; i++)
    {
        hsh[a[i]]++;
        if(hsh[a[i]] == k)
            return a[i];
    }
    return -1;
}
int main(){
    int arr[] = {5,4,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<FirstElementKTimes(arr,n,k);
    return 0;
}