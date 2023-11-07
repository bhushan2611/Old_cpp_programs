#include<bits/stdc++.h>
using namespace std;

void fun(vector<string>& ans, string s,string& output,string mapp[],int index){
    if(index>=s.length()){
        ans.push_back(output);
        return;
    }   
    int num = s[index] - '0';
    for(int i=0; i<mapp[num].size(); i++){
        output.push_back(mapp[num][i]);
        fun(ans,s,output,mapp,index+1);
        output.pop_back();                      // for backtracking
    }
}

vector<string> keypad(string s){
    vector<string> ans;
    if(s.length()==0){ // for empty string
        return ans;
    }
    string mapp[10] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    int index = 0;
    fun(ans,s,output,mapp,index);
    return ans;
}
int main(){
    string str = "23";
    vector<string> ans = keypad(str);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}