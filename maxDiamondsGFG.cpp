#include <bits/stdc++.h>
using namespace std;

long long maxDiamonds(int arr[], int N, int K)
{
    int ind, sum = 0;
    while (K--)
    {
        int max = arr[0];
        for (int i = 1; i < N; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                ind = i;
            }
            if(max==arr[0])
                ind=0;
        }
        sum = sum + max;
        arr[ind] = arr[ind] / 2;
    }
    return sum;
}
int main()
{
    int arr[5] = {317};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << maxDiamonds(arr, size, 56);
    return 0;
}

/*  1 56
    317 

    output 628 
*/