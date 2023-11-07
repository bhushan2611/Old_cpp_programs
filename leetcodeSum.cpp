#include<bits/stdc++.h>
using namespace std;
void fun(int arr[], int n, int target){
    int i=0,j=1,sum=arr[0];  
    while(i<j)
    {
        sum=sum+arr[j++];
        if(sum>target)
            sum=sum-arr[i++];
        if(sum==target){
            cout<<i<<" "<<j-1;
            return;
        }
    }
}
int main(){ 
    int arr[]={3,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    fun(arr,size,6);  
    return 0;
}