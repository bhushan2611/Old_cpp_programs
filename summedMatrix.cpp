#include<bits/stdc++.h>
using namespace std;

long long sumMatrix(long long n, long long q) {
        // code here
        long long ans;
        if(q<=n){
            ans=q-1;
            return ans;
        }if(q>2*n)
            return 0;
        ans=2*n-q+1;
        return ans;
    }
int main(){
    long long n=655, q=5187571;
    // cout<<"enter n and q: ";
    // cin>>n>>q;
    cout<<sumMatrix(n,q);
    return 0;
}