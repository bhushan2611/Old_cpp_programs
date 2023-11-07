// print pascal's triangle in all 3 variation.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,r,c;
    cout<<"enter N, row and col ";
    cin>>N>>r>>c;
    vector<int> v[N];
    for(int i=0; i<N; ++i){
        for(int j=0; j<=i; ++j){
            if(j==0 or j==i)
                v[i].push_back(1);
            else{
                int first = v[i-1][j-1];
                int second = v[i-1][j];
                int sum = first + second;
                v[i].push_back(sum);
            }
        }
    }
    cout<<v[r-1][c-1]<<endl;                // for variation 1

    for(int i=0; i<v[r-1].size(); ++i){     // for variation 2
        cout<<v[r-1][i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<r; ++i){                 // for variation 3
        for(int j=0; j<=i; ++j)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}