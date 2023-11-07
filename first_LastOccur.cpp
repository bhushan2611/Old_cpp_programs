#include<bits/stdc++.h>
using namespace std;

pair<int,int> occuranceByBin(int arr[],int size,int key){
    pair<int,int> p;
    int low=0,high=size-1,mid;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]<key)
            low = mid+1;
        else   
            high = mid;
    }
    int first = high;
    high = size-1;
    while(low<high){
        mid=(low+high)/2;
        if(arr[mid]>key)
            high = mid-1;
        else   
            low = mid+1;
    }   
    int last = high;
    p = {first,last};
    return p;
}
int main(){
    int arr[]={2,2,2,2,5,6,7,8,9,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    pair<int,int> p = occuranceByBin(arr,size,2);
    cout<<p.first<<" "<<p.second;
    return 0;
}