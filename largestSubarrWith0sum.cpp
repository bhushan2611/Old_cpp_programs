#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    // Your code here
    int hsh[n] = {};
    int large = -1;
    hsh[0] = A[0];
    if (n == 1 and A[0] == 0)
        return 0;
    for (int i = 1; i < n; i++)
        hsh[i] = hsh[i - 1] + A[i];

    // for(int j=0; j<n; j++)
    //     cout<<hsh[j]<<" ";

    for (int j = 1; j < n; j++)
        if (hsh[j] == A[0] or hsh[j] == 0)
            large = j;
    return large;
}
int main()
{
    // vector<int> v{-776, 794, 387, -648, 363, 691, 764, -539, -171, -210, -566, 783, -861, 68, 930, -21, -68, 394, -10, -228, 422, 785, 199, -314, -412, -90, -955, 863, -995, 306, 85, 337, 847, 314, 125, 583, 815, 435, -42, -86, -275, -787, -402, 755, 933, -675, -738, -225, -93, 796, -433, -466, 98, -316, -651, -300, -285, 866, 445, 441, 32, 98, 482, 710, 568, -496, 587, 307, 220, -527, 733, 504, 271, -707, 341, 797, 619, 847, 922, 380, -763, -840, -192, -33};
    vector<int> v{1,-1,3,2,-2,-8,1,7,10,23};
    cout << maxLen(v, v.size());
    // maxLen(v, v.size());
    return 0;
}