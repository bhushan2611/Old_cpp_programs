#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zero++;
        else if (arr[i] == 1)
            one++;
        else
            two++;
    }
    int count = 0;
    while (zero--)
    {
        arr[count] = 0;
        count++;
    }
    while (one--)
    {
        arr[count] = 1;
        count++;
    }
    while (two--)
    {
        arr[count] = 2;
        count++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {0, 1, 0, 2, 2, 0, 1, 1, 0, 2, 1, 0, 1, 1, 0, 0, 2, 1, 0, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    return 0;
}