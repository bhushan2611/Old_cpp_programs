#include <bits/stdc++.h>
using namespace std;

int distributeTicket(int N, int K)
{
    // code here
    int i = 0, j = N - K, last = N - 1, x;
    while (i + K < j)
    {
        i = i + K;
        x = j;
        if (j + (K - 1) == last)
        {
            j = x - K;
            last = x - 1;
        }
    }
    return last + 1;
}
int main()
{
    cout << distributeTicket(9,4);
    return 0;
}