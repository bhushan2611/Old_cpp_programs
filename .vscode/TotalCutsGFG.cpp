#include <iostream>
using namespace std;

int smallest(int arr[], int r, int N)
{
    int temp = arr[r];
    for (int i = r + 1; i < N; i++)
    {
        if (temp > arr[i])
            temp = arr[i];
    }
    return temp;
}
int largest(int arr[], int r)
{
    int temp = arr[0];
    for (int i = 1; i < r; i++)
    {
        if (temp < arr[i])
            temp = arr[i];
    }
    return temp;
}
int main()
{
    int N = 5, K = 5;
    int arr[N] = {1, 2, 3, 4, 5};
    int sum = 0, cut = 0;
    // for (int i = 0; i < N - 1; i++)
    // {
    //     sum = largest(arr, i + 1) + smallest(arr, i + 1, N);
    //     if (sum >= K)
    //         cut++;
    // }
    // cout << cut;



    // optimized TC = O(n)
    // int left[N], right[N];
    // left[0] = arr[0]; // consider first as greater.
    // for (int i = 1; i < N; i++)
    // {
    //     left[i] = max(arr[i], left[i - 1]);
    // }

    // right[N - 1] = arr[N - 1]; // consider last as smaller.
    // for (int i = N - 2; i >= 0; i--)
    // {
    //     right[i] = min(arr[i], right[i + 1]);
    // }

    // for (int i = 1; i < N; i++)
    // {
    //     sum = left[i - 1] + right[i];
    //     if (sum >= K)
    //         cut++;
    // }
    // cout << cut;

    return 0;
}