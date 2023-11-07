#include<bits/stdc++.h>
using namespace std;
const int n=1e5;
vector<int> graph[n];
int sum=0;
void dfs(int vertex, int par=0){
    sum = sum + vertex;
    for(int child : graph[vertex]){
        if(child == par) continue;
        dfs(child, vertex);
    }
}
int main(){
    int node;
    cout<<"enter no. of nodes ";
    cin>>node;
    cout<<"enter edges \n";
    for(int i=0; i<node-1; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    cout<<"sum is "<<sum<<endl;
    return 0;
}