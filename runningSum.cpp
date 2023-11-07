#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums, int n){
    vector<int> sum;
    int a=nums[0];
    sum.push_back(a);
    for (int i = 1; i < n; i++)
    {
        int ans=sum[i-1]+nums[i];
        sum.push_back(ans);
    }
    return sum;
}
int main(){
    vector<int> v {1,2,3,4,5};
    vector<int> vec;

    vec=runningSum(v,v.size());
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}