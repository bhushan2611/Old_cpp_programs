#include<bits/stdc++.h>
using namespace std;

// **** using recursion ****
// int fun(vector<int>& ans,int i,int j){
//     if(j==1) return 1;
//     if(i==j) return i;
//     int x=fun(ans,i-1,j-1)+fun(ans,i-1,j);
//     return x;
// }
// vector<int> pascal(int n){
//     vector<int> ans;
//     ans.push_back(1);
//     if(n==0) return ans;
//     ans.push_back(n);
//     if(n==1) return ans;
//     int i=n,j=3;
//     for(int c=1; c<n-1; c++){
//         int x=fun(ans,i,j);
//         ans.push_back(x);
//         j++;
//     }
//     ans.push_back(1);
//     return ans;
// }

// using recursion+memoization (2-D DP) 
int fun(vector<int>& ans,int i,int j,vector<vector<int>>& dp){
    if(j==1) return 1;
    if(i==j) return i;
    if(dp[i][j] != 0)
        return dp[i][j];

    return dp[i][j]=fun(ans,i-1,j-1,dp)+fun(ans,i-1,j,dp);
}
vector<int> pascal(int n){
    vector<int> ans;
    vector<vector<int>> dp(n+1,vector<int> (n+1,0));

    ans.push_back(1);
    if(n==0) return ans;
    ans.push_back(n);
    if(n==1) return ans;
    int i=n,j=3;
    for(int c=1; c<n-1; c++){
        int x=fun(ans,i,j,dp);
        ans.push_back(x);
        j++;
    }
    ans.push_back(1);
    return ans;
}
int main(){
    int n=6;
    vector<int> ans;
    cout<<"row is: "<<endl;
    ans=pascal(n);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}