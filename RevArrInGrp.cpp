#include <bits/stdc++.h>
using namespace std;
void revArrInGrp(vector<long long> arr, int n, int k)
{
    int temp, count = 0,counter = 2;  // hence counter declared here and it works fine
    int i = 0, j = k - 1;
    int loop = n / k;
    while (loop--)
    {
        for (int a = i; a <= (i + j) / 2; a++)
        {
            temp = arr[a];
            arr[a] = arr[j - count];
            arr[j - count] = temp;
            count++;
        }
        // int = counter = 2;   // logical error : (counter is declared here so that at each iteration it becomes 2 every time, but we need that it should increase by 1)
        j = (k * counter++) - 1;
        i = j - (k - 1);
        count = 0;
    }
    if (j >= n)
    {
        j = n - 1;
        for (int b = i; b <= (i + j) / 2; b++)
        {
            temp = arr[b];
            arr[b] = arr[j - count];
            arr[j - count] = temp;
            count++;
        }
    }
    for (i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}
int main()
{
    vector<long long> v{36, 93, 64, 48, 96, 55, 70, 0, 82, 30, 16, 22, 38, 53, 19, 50, 91, 43, 70, 88, 10, 57, 14, 94, 13, 36, 59, 32, 54, 58, 18, 82, 67};
    revArrInGrp(v, v.size(), 13);
    return 0;
}

// 33 13
//  36 93 64 48 96 55 70 0 82 30 16 22 38 53 19 50 91 43 70 88 10 57 14 94 13 36 59 32 54 58 18 82 67

// my output (wrong)
// 38 22 16 30 82 0 70 55 96 48 64 93 36 36 13 94 14 57 10 88 70 43 91 50 19 53 59 32 54 58 18 82 67 (when counter declared at line no 17.)

// my output (correct)
// 38 22 16 30 82 0 70 55 96 48 64 93 36 36 13 94 14 57 10 88 70 43 91 50 19 53 67 82 18 58 54 32 59 (when counter declared at line no. 5)

// correct output
// 38 22 16 30 82 0 70 55 96 48 64 93 36 36 13 94 14 57 10 88 70 43 91 50 19 53 67 82 18 58 54 32 59