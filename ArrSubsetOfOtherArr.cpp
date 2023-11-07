#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    int count = 0;
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    for (int i = 0; i < n; i++)
    {
        if (a2[count] == a1[i])
            count++;
        if (count == m)
            return "Yes";
    }
    return "No";
}
int main()
{
    string str;
    int arr1[] = {11, 7, 1, 13, 21, 3, 7, 3};
    int arr2[] = {11, 3, 7, 1, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    str = isSubset(arr1, arr2, size1, size2);
    cout << str;
    return 0;
}