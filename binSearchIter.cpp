#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n)
{
    int low = 0, high = n - 1, ele;
    cout << "\nEnter element to be search ";
    cin >> ele;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == ele)
            return mid;
        else if (a[mid] < ele)
            low = mid + 1;
        else if (a[mid] > ele)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 4, 6, 8, 10, 11, 21, 42, 66};
    int size = sizeof(a) / sizeof(a[0]);
    cout << search(a, size);
    return 0;
}