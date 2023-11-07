#include<bits/stdc++.h>
using namespace std;
int fun(int arr[], int size){
    if(size == 1)
        return arr[0];
    return arr[0] + fun(arr+1,size-1);
}
int main(){
    int arr[] = {4,2,1,5};
    cout<<"sum is "<<fun(arr,4);
    return 0;
}