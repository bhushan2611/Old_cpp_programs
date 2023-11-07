#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="";
    string s="bhushan marathe from shirpur";
    for(int i=0; i<s.length()/2; i++)
        str = str + s[i];
    cout<<str;
    return 0;
}