#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> graph[N];
vector<vector<int>> cc;
vector<int> temp;
bool vis[N];
void dfs(int vertex){
    temp.push_back(vertex);
    vis[vertex] = true;
    for(int child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
// // time complexity = O(V + E)

int main(){
    int n,m;
    cout<<"enter num of vertex and edges ";
    cin>>n>>m;
    cout<<"enter pair of connected edges\n";
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=1; i<=n; ++i){
        if(vis[i]) continue;
        temp.clear();
        dfs(i);
        cc.push_back(temp);
    }
    for(auto i: cc){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}