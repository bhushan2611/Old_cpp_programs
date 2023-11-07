#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 31;
    long long arr[N], count = pow(2, N);
    for (int x = 0; x <= N; x++)
    {
        arr[x] = count;
        count = count / 2;
    }
    int A[N + 1] = {};
    int i = 0, num;
    cout << "Enter a decimal number: ";
    cin >> num;
    while (num > 0)
    {
        if (num >= arr[i])
        {
            num = num - arr[i];
            A[i++] = 1;
        }
        else
            A[i++] = 0;
    }
    for (int i = 0; i <= N; i++)
    {
        if (A[i] == 1)
        {
            for (int a = i; a <= N; a++)
                cout << A[a];
            break;
        }
    }
    return 0;
}