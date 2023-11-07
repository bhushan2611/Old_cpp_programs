#include<bits/stdc++.h>
using namespace std;

string LCP(vector<string> str){
    string temp = str[0];
    string t;
    for(int i=1; i<str.size(); i++){
        for(int j=0; j<str[i].size(); j++){
            if(temp[j] == str[i][j])
                t.push_back(temp[j]);
            else
                break;
        }
        temp = t;
        t.clear();
    }
    return temp;
}
int main(){
    vector<string> str{"coding","coders","codingnijaas","coffee"};
    string ans = LCP(str);
    cout<<ans;
    return 0;
}