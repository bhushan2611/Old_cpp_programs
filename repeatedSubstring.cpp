#include<bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s) {
        char arr[10000]={};
        arr[0] = s[0];
        arr[1] = '\0';
        int i=1;
        while(s[0] != s[i]){
            arr[i] = s[i];
            arr[i+1] = '\0';
            i++;
        }
        int size = i;
        int count = 0;
        for(; i < s.length(); i++){
            if(arr[count % size] != s[i])
                return false;
            count++;
        }
        if((count%size)+size == size)
            return true;
        else
            return false;
    }
int main(){
    string str="abcabcabcabc";
    cout<<repeatedSubstringPattern(str);
    return 0;
}