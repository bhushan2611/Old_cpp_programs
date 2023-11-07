#include<bits/stdc++.h>
using namespace std;

void rev(string &str,int i){
    int n = str.length();
    if(i > n/2 - 1)
        return;
    swap(str[i],str[n-i-1]);
    i++;
    rev(str,i);
}

int checkPalindrome(string str, int i){
    int n = str.length();
    if(i > n/2-1)
        return 1;
    if(str[i] != str[n-i-1])
        return 0;
    i++;
    checkPalindrome(str,i);
}
int main(){
    
// to reverse the string
    // string str="ohb er olaz esrever";
    // rev(str,0);
    // cout<<str;

// check whether string is palindrome or not
    string str = "oppo";
    int ans = checkPalindrome(str,0);
    if(ans) cout<<"yes";
    else cout<<"no";
    return 0;
}