#include <bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n)
{
    // Your code here
    long long A[n];
    int count = 0, i = 0, j = n - 1;
    while (count < n)
    {
        A[count] = arr[j];
        A[count + 1] = arr[i];
        count += 2;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    long long arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}