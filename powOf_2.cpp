#include<bits/stdc++.h>
using namespace std;

int main(){
    long long pw[32];
    pw[0] = 1;
    for(int i=1; i<32; ++i){
        pw[i] = pw[i-1] * 2;
    }
    // for(int i=0; i<32; ++i){
    //     cout<<i<<" "<<pw[i]<<endl;
    // }
    cout<<"enter x ";
    int x;
    cin>>x;
    int flag = 1;
    for(int i=0; i<31; ++i){
        if(x == pw[i]){
            cout<<"present";
            flag = 0;
            break;
        }
    }
    if(flag)
        cout<<"not present";
    return 0;
}