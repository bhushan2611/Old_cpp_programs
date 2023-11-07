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
    int n, k;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(0, n - 1, arr);
    cout << "enter value of k: ";
    cin >> k;
    cout << arr[k - 1];
    return 0;
}