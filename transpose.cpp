#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix, int n)
{
    vector<vector<int>> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(matrix[j][i]);
        }
        m.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> mat{{-4, 9, 8, 2, 5},
                            {-1, -1, -5, 7, 1},
                            {2, -2, 1, 8, -7},
                            {1, 9, 7, -5, 3},
                            {-2, -3, 1, -3, 7}};
    transpose(mat, 5);
    return 0;
}