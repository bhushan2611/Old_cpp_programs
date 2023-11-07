#include<iostream>
using namespace std;
int bin_search(int arr[], int low, int high, int val){
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==val)
            return 1;
        else if(val<arr[mid])
            return bin_search(arr,low,mid-1,val);
        else
            return bin_search(arr,mid+1,high,val);
    }
    return 0;
}
int main(){
    // important condition is that array must be sorted.
    int ans,data;
    cout<<"enter element to be search\n";
    cin>>data;
    // int arr[] = {34,35,65,31,25,89,64,30}; // will not work
    int arr[] = {34,35,45,51,65,89,94,100}; // will work
    int size=sizeof(arr)/sizeof(arr[0]);
    ans=bin_search(arr,0,size-1,data);
    if(ans)
        cout<<"element found";
    else
        cout<<"element not found";
    return 0;
}