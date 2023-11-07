#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,1,-2,-5,2,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    int pos=0,neg=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            ans[pos]=arr[i];
            pos += 2;
        }
        else{
            ans[neg]=arr[i];
            neg += 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}