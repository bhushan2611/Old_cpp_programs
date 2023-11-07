#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, size;
    // cin >> t;
    // while (t--)
    // {
        cin >> size;
        int arr[size][size], rot[size][size];
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                cin >> arr[i][j];

        int k = size - 1;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
                rot[j][k] = arr[i][j];
            k--;
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (j < size - 1)
                    cout << rot[i][j] << " ";
                else
                    cout << rot[i][j];
            }

            cout << endl;
        }
    // }
    return 0;
}