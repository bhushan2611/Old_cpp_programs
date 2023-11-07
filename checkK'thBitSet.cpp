#include <bits/stdc++.h>
using namespace std;

bool checkKthBit(int n, int k)
{
    vector<int> v;
    int bin;
    while (n != 0)
    {
        bin = n % 2;
        v.push_back(bin);
        n = n / 2;
    }
    reverse(v.begin(), v.end());
    if (v[v.size() - 1 - k] == 1)
        return true;
    else
        return false;
}
int main()
{
    int n = 500, k = 3;
    cout << checkKthBit(n, k);
    return 0;
}