#include <bits/stdc++.h>
using namespace std;

// int minJumps(int arr[], int n)
// {
//     // Your code here
//     int count = 0, i = 0;
//     while (i < n - 1)
//     {
//         if (arr[i] == 0)
//             return -1;
//         else
//         {
//             i = i + arr[i];
//             ++count;
//         }
//     }
//     return count;
// }

int minJumps(int arr[], int n)
{
    int i = 0, jumps = 0;
    while (i < n - 1)
    {
        if (arr[i] == 0)
            return -1;
        else
        {
            int count = i + 2, MaxInd = i + 1, max = arr[i + 1];
            for (int j = 1; j < arr[i]; j++)
            {
                if(arr[count-1]>=n-count)
                    return jumps+2;
                if (max < arr[count])
                {
                    max = arr[count];
                    MaxInd = count;
                }
                count++;
            }
            i = MaxInd;
            jumps++;
            if (count >= n)
                return jumps;
        }
    }
    return jumps;
}
int main()
{
    // 70 21 46 25 54 76 92 84 47 57 46 31 38 31 75 40 61 21 84 51 86 41
    int arr[] = {9, 10, 1, 2, 3, 4, 8, 0, 0, 0, 0, 0, 0, 0, 1}; // o/p = 2
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << minJumps(arr, size);
    return 0;
}