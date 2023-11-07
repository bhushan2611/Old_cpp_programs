#include <bits/stdc++.h>
using namespace std;

void zigZag(int arr[], int n)
{
    int newArr[n];
    int i = 0, j = 1, count = 0;
    while (count < n)
    {
        if (arr[i] < arr[j])
        {
            newArr[count++] = arr[i++];
            if (i < j)
            {
                i = j;
                j++;
            }
            if (i == j)
                j++;
        }
        else
        {
            newArr[count++] = arr[j];
            if (j != n - 1)
                j++;
        }

        if (arr[i] > arr[j])
        {
            newArr[count++] = arr[i++];
            if (i == j)
            {
                j++;
            }
            else if (i < j)
            {
                i = j;
                j++;
            }
        }
        else
            newArr[count++] = arr[j++];
    }
    if (count == n+1)
        cout << "1";
    else
        cout << "0";
    // for (i = 0; i < n; i++)
    //     cout << newArr[i] << " ";
}
int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    zigZag(arr, size);
    return 0;
}