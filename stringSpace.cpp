#include<bits/stdc++.h>
using namespace std;

int main(){
    int count=0;
    string str="bhu h n ma rathe dog";
    for(int i=0; i< str.length(); i++){
        if(str[i] == 32){
            ++count;
        }
    }
    cout<<count;
    return 0;
}