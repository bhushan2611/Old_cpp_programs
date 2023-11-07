#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    vector<char> ch;
    string s = strs[0];
    for(int i=1; i<strs.size(); ++i){
        ch.clear();
        for(int j=0; j<strs[i].size(); ++j){
            if(s[j] == strs[i][j])
                ch.push_back(strs[i][j]);
            else
                break;
        }
        string temp(ch.begin(),ch.end());
        s=temp;
    }
    return s;
}
int main()
{
    vector<string> str{"aaa","aa","aaa"};
    string ans;
    ans = longestCommonPrefix(str);
    cout<<ans;
    return 0;
}