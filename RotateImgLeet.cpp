#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> B;
        vector<int> temp;
    for(int i=0; i<matrix.size(); ++i){
        int n=matrix[i].size();
        int count=0;
        temp.clear();
        for(int j=0; j<n; ++j){
            int val = matrix[(n-1)-count++][i];
            temp.push_back(val);
        }
        B.push_back(temp);
    }
    matrix = B;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> mat{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(int i=0; i<mat.size(); ++i){
        for(int j=0; j<mat[i].size(); ++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"after rotation\n";
    rotate(mat);
    return 0;
}