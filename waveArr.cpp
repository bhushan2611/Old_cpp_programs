#include <bits/stdc++.h>
using namespace std;

void convertToWave(int n, vector<int> &arr)
{

    // Your code here
    int A[n];
    int s = 0, l = 1, i = 0;
    while (s < n or l < n)
    {
        if (s == n - 1)
            A[i] = arr[s];
        else
        {
            A[i] = arr[l];
            A[i + 1] = arr[s];
        }
        l = l + 2;
        s = s + 2;
        i = i + 2;
    }
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
}
int main()
{
    vector<int> v{1,2,3,4,5};
    convertToWave(v.size(), v);
    return 0;
}