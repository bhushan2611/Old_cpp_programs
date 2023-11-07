#include <bits/stdc++.h>
using namespace std;

int findOnce(int arr[], int n)
{
    // code here.
    int i = 1, j = n - 2;
    if (n == 1)
        return arr[0];
    while (i <= j)
    {
        if (arr[i] == arr[i - 1])
            i = i + 2;
        else
            return arr[i - 1];
        if (arr[j] == arr[j + 1])
            j = j - 2;
        else
            return arr[j + 1];
    }
    return arr[j + 1];
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findOnce(arr, size);
    return 0;
}