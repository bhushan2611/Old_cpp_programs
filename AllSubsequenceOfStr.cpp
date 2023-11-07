#include<bits/stdc++.h>
using namespace std;
void fun(vector<string>& ans,string output, int i, string str){
    if(i>= str.length()){
        ans.push_back(output);
        return;
    }
    // exclude call
    fun(ans,output,i+1,str);

    // include call
    output.push_back(str[i]);
    fun(ans,output,i+1,str);
}
vector<string> subset(string str){
    vector<string> ans;
    string output = "";
    int index = 0;
    fun(ans,output,index,str);
    return ans;
}
int main(){
    string str="abc";
    vector<string> ans = subset(str);
    cout<<"subsets of strings are: "<<endl;
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<endl;
    return 0;
}