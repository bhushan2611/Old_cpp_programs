#include<bits/stdc++.h>
using namespace std;

vector<int> kLargest(int arr[], int n, int k) {
	    // code here
        vector<int> v;
        sort(arr, arr+n);
        for (int i = n-1; i >= n-k ; i--)
            v.push_back(arr[i]);
        return v;
	}
int main(){
    int arr[]={12, 5, 787, 1, 23};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int> v1;
    int k=2;
    v1=kLargest(arr,size,k);
    for (int i = 0; i < v1.size(); i++)
        cout<<v1[i]<<" ";
    
    return 0;
}