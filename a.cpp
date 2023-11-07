#include <bits/stdc++.h>
using namespace std;

int hourglassSum(int arr[6][6])
{
    int max = 0;
    int icount = 0;
    while (icount < 4)
    {
        int jcount = 0;
        while (jcount < 4)
        {
            int sum = 0;
            for (int i = icount; i <= icount + 2; i++)
            {
                for (int j = jcount; j <= jcount + 2; j++)
                {
                    if (!(i == (i - 1) + (i + 1) / 2 && (j == jcount || j == jcount + 2)))
                    {
                        sum += arr[i][j];
                    }
                }
            }
            if (max < sum)
                max = sum;
            jcount++;
        }
        icount++;
    }
    return max;
}
int main()
{
    int arr[6][6] = {{-9, -9, -9, 1, 1, 1},
                     {0, -9, 0, 4, 3, 2},
                     {-9, -9, -9, 1, 2, 3},
                     {0, 0, 8, 6, 6, 0},
                     {0, 0, 0, -2, 0, 0},
                     {0, 0, 1, 2, 4, 0}};
    cout<<hourglassSum(arr);
    return 0;
}