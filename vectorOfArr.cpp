#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v[3];
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        // for (int j = 0; j < v[i].size(); j++)
        // {
        //     cout << v[i][j] << " ";
        // }
        printvec(v[i]);
    }
    return 0;
}