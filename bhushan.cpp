#include<bits/stdc++.h>
using namespace std;
const int g=1e4;
int graph[g][g]={};
int main(){
    cout<<"enter val of nodes and edges\n";
    int n,m;
    cin>>n>>m;
    // for(int i=1; i<=n; i++){
    //     int u,v;
    //     cin>>u>>v;
    //     graph[u][v] = 1;
    //     graph[v][u] = 1;
    // }
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; ++j){
    //         cout<<graph[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int> vec[n];
    for(int i=1; i<=m; ++i){
        int u,v;
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    return 0;
}