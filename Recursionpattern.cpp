#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n)
        return;
    for(int j=1; j<=i; j++)
        cout<<"* ";
    cout<<endl;
    fun(i+1,n);
}
int main(){
    int n=5;
    fun(1,n);
    return 0;
}