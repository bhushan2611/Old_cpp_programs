#include<bits/stdc++.h>
using namespace std;
   bool isPalindrome(int x) {
        if(x<0)return false;
        int num=x,rev=0,rem;
        while(num>0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(num == x)return true;
        else return false;
    }
int main(){
    cout<<isPalindrome(1234567899);
    return 0;
}