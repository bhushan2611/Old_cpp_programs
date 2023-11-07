#include <bits/stdc++.h>
using namespace std;

int maxOnes(vector<vector<int>> &Mat, int N, int M)
{
    int max = 0, temp, ans;
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if (Mat[i][j] == 0)
                ++count;
            else
            {
                temp = M - count;
                if (max < temp)
                {
                    max = temp;
                    ans = i;
                }
                break;
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> v{{0, 0, 0, 0, 1, 1, 1},
                          {0, 0, 0, 1, 1, 1, 1},
                          {0, 0, 1, 1, 1, 1, 1}};

    cout << maxOnes(v, 3, 7);

    return 0;
}