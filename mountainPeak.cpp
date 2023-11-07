#include<bits/stdc++.h>
using namespace std;
int peak(int arr[],int size){
    int low=0,high=size-1,mid;
    while (low<high){
        mid = (low+high)/2;
        if(arr[mid]<arr[mid+1])
            low=mid+1;
        else   
            high=mid;
    }
    return mid+1;   
}
int main(){
    int arr[] = {2,3,4,8,9,10,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<peak(arr,size);
    return 0;
}