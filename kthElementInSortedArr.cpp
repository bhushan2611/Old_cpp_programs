#include<bits/stdc++.h>
using namespace std;
int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int key,i=0,j=0,count=0;
        while(count<k){
            if(arr1[i]<arr2[j])
                key=arr1[i++];
            else
                key=arr2[j++];
            count++;
        }
        return key;
    }
int main(){
    int arr1[]={2, 3, 6, 7, 9};
    int arr2[]={1, 4, 8, 10,11};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    cout<<kthElement(arr1,arr2,n,m,10);
    return 0;
}