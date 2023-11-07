#include <bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n)
{

    // Your code here
    int i = 1, j = n - 2;
    int left = a[0], right = a[n - 1];
    if (n == 1)
        return 1;
    while (i < j)
    {
        if (left < right)
            left = left + a[i++];
        else
            right = right + a[j--];
    }
    if (left == right && n > 2)
        return i + 1;
    else
        return -1;
}
int main()
{
    long long arr[] = {1, 3, 5, 2, 2};
    cout << equilibriumPoint(arr, 5);
    return 0;
}