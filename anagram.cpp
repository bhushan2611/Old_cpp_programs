#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string a, string b)
{
    // Your code here
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a == b)
        return true;
    else    
        return false;
}

int main()
{
    string a = "geeksforgeeks", b = "forgeeksgiiks";
    if(isAnagram(a,b))
        cout<<"YES";
    else   
        cout<<"NO";
    return 0;
}