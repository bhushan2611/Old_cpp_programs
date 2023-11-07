#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str) {
  // Write your code here
  int n=str.length();
  for (int i = 0; i < n/2; i++)
  {
        if(str[i] != str[n-i-1])
            return false;
  }
  return true;
}
int main(){
    string str="nitit";
    if(isPalindrome(str))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}