#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n)
{
    int temp;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j + 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout<<endl;
    }
    cout << "sorted array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[4] = {4, 3, 2, 1};
    bubble(arr, 4);
    return 0;
}