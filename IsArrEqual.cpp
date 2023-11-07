#include <bits/stdc++.h>
using namespace std;
bool fun(vector<int> v1,vector<int> v2, int N){
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for (int i = 0; i < N; i++)
    {
        if(v1[i] != v2[i])return false;
    }
    return true;
}
int main()
{
    int N = 3, count = 0;
    vector<int> v1{3,10,2};
    vector<int> v2{10,3,2};
    cout<<fun(v1,v2,N);
    return 0;
}