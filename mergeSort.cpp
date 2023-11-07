#include <iostream>
using namespace std;
void merge(int low, int mid, int high, int arr[])
{
    int i = low, j = mid + 1, k = low, B[high];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k++] = arr[i++];
        }
        else
        {
            B[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        B[k++] = arr[i++];
    }
    while (j <= high)
    {
        B[k++] = arr[j++];
    }
    for (int p = low; p <= high; p++)
    {
        arr[p] = B[p];
    }
}
void mergeSort(int low, int high, int arr[])
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(low, mid, arr);
        mergeSort(mid + 1, high, arr);
        merge(low, mid, high, arr);
    }
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(0, size - 1, arr);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}