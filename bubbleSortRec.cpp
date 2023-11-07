#include<bits/stdc++.h>
using namespace std;

// iterative way
// void bubble(int arr[],int n){
//     for(int i=0; i<n-1; i++){
//         int flag=1;
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=0;
//             }
//         }
//         if(flag)
//             break;
//     }
// }

// recursive way
void bubble(int arr[],int n){
    if(n==1 or n==0)
        return;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }
    bubble(arr,n-1);
}
int main(){
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);
    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";
    return 0;
}