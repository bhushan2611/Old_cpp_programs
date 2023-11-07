#include<bits/stdc++.h>
using namespace std;

// normal recursion
// int fun(int cost[], int n){
//     if(n == 1 or n == 0)
//         return 0;
//     int last = fun(cost,n-1) + cost[n-1];
//     int secondLast = fun(cost,n-2)+cost[n-2];
//     int m = min(last,secondLast);
//     return m;
// }

// apply DP
int fun(int cost[], int n){
    static vector<int> vis(n+1,-1);
    if(n == 1 or n == 0)
        return 0;
    if(vis[n] != -1)
        return vis[n];

    int last = fun(cost,n-1) + cost[n-1];
    int secondLast = fun(cost,n-2)+cost[n-2];
    return vis[n] = min(last,secondLast);
}
int main(){
    int cost[] = {1,100,1,1,1,100,1,1,100,1};
    int n = sizeof(cost)/sizeof(cost[0]);
    cout<<fun(cost,n);
    return 0;
}