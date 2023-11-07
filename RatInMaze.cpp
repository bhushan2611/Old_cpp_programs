#include <bits/stdc++.h>
using namespace std;
const int N=1e3;
bool visited[N][N];

bool isSafe(int x,int y,vector<vector<int>>& maze, int n){
    if((x>=0 and x<n) and (y>=0 and y<n) and visited[x][y] == 0 and maze[x][y]==1)
        return true;
    return false;
}
void solve(int x,int y,vector<string>& ans, string path,vector<vector<int>>& maze,int n){
    if(x == n-1 and y == n-1){
        ans.push_back(path);
        return;
    }

    visited[x][y]=true;
    if(isSafe(x+1,y,maze,n)){       // down
        path.push_back('D');
        solve(x+1,y,ans,path,maze,n);
        path.pop_back();
    }

    if(isSafe(x,y-1,maze,n)){       // left
        path.push_back('L');
        solve(x,y-1,ans,path,maze,n);
        path.pop_back();
    }

    if(isSafe(x,y+1,maze,n)){       // right
        path.push_back('R');
        solve(x,y+1,ans,path,maze,n);
        path.pop_back();
    }

    if(isSafe(x-1,y,maze,n)){       // up
        path.push_back('U');
        solve(x-1,y,ans,path,maze,n);
        path.pop_back();
    }
    visited[x][y]=false;
}
vector<string> RIM(vector<vector<int>>& maze, int n){
    vector<string> ans;
    if(maze[0][0] == 0)
        return ans;
    int x=0,y=0;
    string path="";
    solve(x,y,ans,path,maze,n);
    return ans;
}
int main()
{
    vector<vector<int>> maze{{1, 1, 1, 1, 0}, 
                             {1, 1, 0, 1, 1}, 
                             {1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1}, 
                             {1, 1, 1, 0, 1}};
    vector<string> ans = RIM(maze,5);
    for(int i=0; i<ans.size(); i++){
        cout<<i+1<<" "<<ans[i]<<endl;
    }
    return 0;
}