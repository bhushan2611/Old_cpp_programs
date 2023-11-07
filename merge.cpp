#include <bits/stdc++.h>
using namespace std;

void merging(int low, int mid, int high, int arr[])
{
    int i = low, j = mid + 1, k = low, newArr[high];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            newArr[k++] = arr[i++];
        else
            newArr[k++] = arr[j++];
    }
    while (i <= mid)
        newArr[k++] = arr[i++];
    while (j <= high)
        newArr[k++] = arr[j++];
    for (int i = low; i <= high; i++)
        arr[i] = newArr[i];
}
void mergeSort(int low, int high, int arr[])
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(low, mid, arr);
        mergeSort(mid + 1, high, arr);
        merging(low, mid, high, arr);
    }
}

int main()
{
    int arr[] = {20, 17, 12, 8, 5, 3, 14, 21, 2, 7, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(0, size - 1, arr);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}