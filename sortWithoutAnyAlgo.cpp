#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 0, 1, 1, 2, 0, 1, 1, 0, 2, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int p = 0, q = 0, r = 0,x,y,z;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            p++;
        else if (arr[i] == 1)
            q++;
        else
            r++;
    }
    //cout << p << " " << q << " " << r;
    for (x = 0; x < p; x++)
    {
        arr[x] = 0;
    }
    for (y = x-1; y < q; y++)
    {
        arr[y] = 1;
    }
    for (z = y-1; z < r; z++)
    {
        arr[z] = 2;
    }
    for (int j = 0; j < size; j++)
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}