#include <bits/stdc++.h>
using namespace std;

void Rearrange(int arr[], int n)
{
    vector<int> neg, pos;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg.push_back(arr[i]);
        else
            pos.push_back(arr[i]);
    }

    for (int j = 0; j < neg.size(); j++)
        arr[j] = neg[j];

    int count = 0;
    for (int k = neg.size(); k < n; k++)
        arr[k] = pos[count++];

    for (int a = 0; a < n; a++)
        cout << arr[a] << " ";
}

int main()
{
    int arr[] = {-3, 1, 0, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    Rearrange(arr, n);
    return 0;
}