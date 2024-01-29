#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> g[N];
bool vis[N];
// void dfs(int vertex){
//     vis[vertex] = true;
//     cout<<vertex<<" ";
//     for(int child : g[vertex]){
//         if(vis[child]) continue;
//         dfs(child);
//     }
// }

void bfs(int vertex){
    queue<int> q;
    q.push(vertex);
    vis[vertex] = true;

    while(!q.empty()){
        int cur_ver = q.front();
        q.pop();
        cout<<cur_ver<<" ";
        for(int child : g[cur_ver]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
            }
        }   
    }
}
int main(){
    int n,e;
    cout<<"enter node and edge: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    // dfs(1);
    bfs(1);
    return 0;
}