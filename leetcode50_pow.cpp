#include<bits/stdc++.h>
using namespace std;
// only for positive value of n
// double pos(double x,int n){
//     if(n==0) return 1;
//     double ans=pos(x,n/2);
//     if(n%2==0) return ans*ans;
//     return ans*ans*x;
// }

// work for both positive and negative val of n
double solve(double x,int n){
    if(n==0) return 1;
    double ans=solve(x,n/2);

    if(n%2==0) return ans*ans;
    if(n<0) return ans*ans*(1/x); // for negative value of n
    else return ans*ans*x;        // for positive value of n
}

// only for negative value of n
// double neg(double x,int n){
//     if(n==0) return 1;
//     double ans=neg(x,n/2);
//     if(n%2==0) return ans*ans;
//     return ans*ans*(1/x);
// }
double power(double x,int n){
    double ans;
    if(n == INT_MIN and x == 1) return 1;
    if(n == INT_MIN and x != 1) return 0;
    // if(n<0){  // for negative value of n
    //     n=-n;
    //     return ans=neg(x,n);
    // }
    return ans=solve(x,n);
}
int main(){
    double x=2;
    int n=-7;
    double ans=power(x,n);
    cout<<ans;
    return 0;
}