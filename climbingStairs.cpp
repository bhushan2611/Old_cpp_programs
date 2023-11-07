#include <bits/stdc++.h>
using namespace std;

// int c;
// void paayri(int n){   // my solution(correct but should int as 'c' (return int value))
//     if(n==0){
//         c++;
//         return;
//     }
//     if(n<0)
//         return;
//     paayri(n-1);
//     paayri(n-2);
// }


// int stairs(int n){     // love babbar
//     if (n == 0)
//         return 1;
//     if (n < 0)
//         return 0;
//     return stairs(n - 1) + stairs(n - 2);
// }


int stairs(int n){             //  climbing stairs using DP
static vector<int> vis(50,0);  // max limit of stairs is 45 on leetcode
    if(n==1 or n==0)
        return 1;

    if(vis[n] != 0)
        return vis[n];

    return vis[n] = stairs(n-2) + stairs(n-1);
}
int main()
{
    int n = 5;

    // paayri(n);     // for my solution
    // cout<<c;

    cout<<stairs(n);  // for love babbar sol. or using DP sol.
    return 0;
}