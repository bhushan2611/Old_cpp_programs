#include <bits/stdc++.h>
using namespace std;
int power(int num, int index)
{
    if (index < 0)
        return -1;
    if (index == 0)
        return 1;
    return num * power(num, index - 1);
}
int main()
{
    int num, index;
    cout << "enter number and power ";
    cin >> num >> index;
    cout << power(num, index);
    return 0;
}