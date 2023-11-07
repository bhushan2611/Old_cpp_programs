#include<bits/stdc++.h>
using namespace std;
int N=1e6;
int MissingNum(int arr[], int n){
    int hash[n+1]={};
    int j=0;
    while (j<n-1){
        hash[arr[j]]=arr[j];
        j++;
    }
    for (int p = 1; p <= n; p++)
        if(hash[p] == 0)
            return p;
}
int main(){
    int n=10;
    int arr[n-1]={6,1,2,8,3,4,7,10,5};
    cout<<MissingNum(arr, n);
    return 0;
}