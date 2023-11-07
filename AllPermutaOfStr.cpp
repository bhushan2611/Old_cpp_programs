#include<bits/stdc++.h>
using namespace std;

void solve(string str,vector<string>& ans, int index){
    if(index >= str.length()){
        ans.push_back(str);
        return ;
    }
    for(int i=index; i<str.length(); i++){
        swap(str[index],str[i]);
        solve(str,ans,index+1);
        swap(str[index],str[i]);
    }
}
vector<string> permute(string str){
    vector<string> ans;
    int index = 0;
    solve(str,ans,index);
    return ans;
}
int main(){
    string str = "abc";
    vector<string> ans = permute(str);
    for(int i=0; i<ans.size(); i++)
        cout<<i+1<<" "<<ans[i]<<endl; 
    return 0;
}