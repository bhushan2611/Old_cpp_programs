#include <bits/stdc++.h>
using namespace std;
long sumOfNaturals(int n)
{
    long m=1e9 + 7;
    long sum = (n * (n + 1) / 2) % m;
    return sum;
}
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    cout << sumOfNaturals(n);
    return 0;
}