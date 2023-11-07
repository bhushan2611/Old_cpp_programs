#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& arr, int i,int n){
    if(i>=n)
        return 0;
    if(n==1)
        return arr[0];
    int a=fun(arr,i+2,n)+arr[i];
    int b=fun(arr,i+1,n);
    int ans=max(a,b);
    return ans;
}
int main(){
    vector<int> arr{9,9,8,2};
    int sum=0;
    cout<<fun(arr,0,arr.size());
    return 0;
}