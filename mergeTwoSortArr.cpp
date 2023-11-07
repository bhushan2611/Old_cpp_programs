#include<bits/stdc++.h>
using namespace std;

void filter(vector<int>& arr1, vector<int> arr2,int m,int n){
    int i=0,j=0,ans;
    vector<int> v;
    while(arr1[i] != 0 and j<n){
        if(arr1[i]<arr2[j]){
            ans=arr1[i++];
            v.push_back(ans);
        }
        else{
            ans=arr2[j++];
            v.push_back(ans);
        }
    }
    while(arr1[i] != 0){
        ans = arr1[i++];
        v.push_back(ans);
    }
    while(j<n){
        ans = arr2[j++];
        v.push_back(ans);
    }
    arr1.clear();
    arr1=v;
}
int main(){
    vector<int> arr1{1,2,3,0,0,0};
    vector<int> arr2{2,5,6};
    int i=0;
    if(arr1.empty())
        i=0;
    else{
        while(arr1[i] != 0)
        i++;
    }
    filter(arr1,arr2,i,arr2.size());
    for(int i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}