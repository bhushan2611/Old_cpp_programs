#include<bits/stdc++.h>
using namespace std;
int arr[1001];
void setArr(){
    for(int i=0; i<=1000; i++)
        arr[i] = i;
}
int pivot(int n){
    setArr();
    if(n==1)
        return 1;
    int i=1,j=n;
    int sum1=arr[i],sum2=arr[j];
    while(i<j){
        if(sum1<sum2){
            i++;
            sum1 += arr[i];
        }
        else if(sum1>sum2){
            j--;
            sum2 += arr[j];
        }
        else{
            i++;j--;
            sum1 += arr[i];
            sum2 += arr[j];
        }
    }
    if(sum1==sum2)
        return i;
    return -1;
}

// optimize than above sol. used binary search
int pivotBin(int n){
    setArr();
    if(n==1)
        return 1;
    int totalSum=(n*(n+1))/2;
    int low=1,high=n;
    while(low<high){
        int mid=(low+high)/2;
        int leftSum = (arr[mid]*(arr[mid]+1))/2;
        int rightSum = totalSum - leftSum + arr[mid];
        if(leftSum<rightSum){
            low=mid+1;
        }
        else if (leftSum>rightSum){
            high=mid;
        }
        else   
            return arr[mid];
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    cout<<pivotBin(n);
    return 0;
}