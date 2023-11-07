#include <bits/stdc++.h>
using namespace std;
void fun(vector<int> v, vector<int> output, vector<vector<int>> &ans, int i)
{
    if (i >= v.size())
    {
        ans.push_back(output);
        return;
    }
    fun(v, output, ans, i + 1);
    output.push_back(v[i]);
    fun(v, output, ans, i + 1);
}
vector<vector<int>> sol(vector<int> &v)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    fun(v, output, ans, index);
    return ans;
}
int main()
{
    vector<int> v{1, 2, 3};
    vector<vector<int>> ans=sol(v);
    cout<<"all subsets of given array are: "<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}