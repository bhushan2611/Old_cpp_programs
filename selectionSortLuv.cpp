#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {4,3,1,9,2};
    // int min = arr[0];
    
    for (int i = 0; i < 4; i++)
    {
        int min = arr[i];
        int ind = i;
        for(int j = i+1; j<5; j++){
            if(min > arr[j]){
                min = arr[j];
                ind = j;
            }
        }
        if(arr[i] > arr[ind]){
            int t = arr[ind];
            arr[ind] = arr[i];
            arr[i] = t;
        }
    }
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}