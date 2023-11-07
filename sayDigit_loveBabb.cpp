#include<bits/stdc++.h>
using namespace std;

void sayDig(int num, vector<string> &s){
    int rem;
    if(num == 0)
        return;
    rem = num%10;
    num = num/10;
    sayDig(num,s);
    cout<<s[rem]<<" ";
}
int main(){
    vector<string> v {"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDig(108,v);
    return 0;
}