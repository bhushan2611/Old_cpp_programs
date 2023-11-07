#include <bits/stdc++.h>
using namespace std;
void rotateby90(vector<vector<int>> &matrix, int n)
{
    // code here
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            swap(matrix[i][j], matrix[j][n - count]);
        count++;
    }
    count = 1;
    int Icounter;
    if (n % 2 == 0)
        Icounter = (n / 2) - 1;
    else
        Icounter = n / 2;

    for (int i = 0; i < Icounter; i++)
    {
        for (int j = i + 1; j < n - count; j++)
            swap(matrix[j][i], matrix[n - count][j]);
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    int n = 3;
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    rotateby90(arr, n);
    return 0;
}