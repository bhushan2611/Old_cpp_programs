#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter n: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=1;j<n+i;j++){
            if(j<=n-i) cout<<"  ";
            else if(j>n-i and j<=n) cout<<++count<<" ";
            else cout<<--count<<" ";
        }
        cout<<endl;
    }
    return 0; 
}
/*
_ _ _ _ 1
_ _ _ 1 2 1
_ _ 1 2 3 2 1
_ 1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/