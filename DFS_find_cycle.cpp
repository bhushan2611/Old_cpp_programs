#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];

bool vis[N];
void dfs(int vertex, int par){
    vis[vertex] = true;
    for(int child : graph[vertex]){
        if(vis[child] and child == par) continue;
        if(vis[child]) continue;
        dfs(child, vertex);
    }
}
int main(){
    int n,e;
    cout<<"enter node and edge: \n";
    cin>>n>>e;
    cout<<"enter pairs of edges: \n";
    for(int i=0; i<e; ++i){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    
    return 0;
}