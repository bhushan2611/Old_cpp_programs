#include <bits/stdc++.h>
using namespace std;
const int n = 3, m = 4;
void change(int x, int y, int mat[][m])
{
    for (int i = 0; i < n; ++i)
        mat[x][i] = 0;

    for (int j = 0; j < m; ++j)
        mat[j][y] = 0;
}
int main()
{
    int mat[n][m] = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    int temp[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            temp[i][j] = mat[i][j];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (temp[i][j] == 0)
                change(i, j, mat);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}