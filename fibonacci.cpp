#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    vector<int> v(n);
    v[0] = 1;
    if (n > 1)
        v[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    fib(n);
    return 0;
}