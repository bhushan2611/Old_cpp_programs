#include <bits/stdc++.h>
using namespace std;

long long int minValue(int a[], int b[], int n)
{
    // 9 6 5 4 1
    // 2 3 4 4 8
    long long sum = 0;
    sort(a, a + n, greater<int>()); // sort array in acending order
    sort(b, b + n);                 // sort array in decending order
    for (int i = 0; i < n; i++)
    {
        sum = sum + (a[i] * b[i]);
    }
    return sum;
}
int main()
{
    int A[] = {3, 1, 1};
    int B[] = {6, 5, 4};
    int size = sizeof(A) / sizeof(A[0]);
    cout << minValue(A, B, size);
    return 0;
}