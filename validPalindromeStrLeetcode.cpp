#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.length();
    vector<char> str;
    for (int i = 0; i < n; ++i)
    {
        if ((s[i] >= 65 and s[i] <= 90) or (s[i] >= 97 and s[i] <= 122) or (s[i] >= 48 and s[i] <= 57))
        {
            if ((s[i] >= 65 and s[i] <= 90))
            {
                char ch = s[i] + 32;
                str.push_back(ch);
            }
            else
                str.push_back(s[i]);
        }
    }
    int size = str.size();
    for (int i = 0; i < size / 2; ++i)
    {
        if (str[i] != str[size - i - 1])
            return false;
    }
    return true;
}
int main()
{
    string str = "0P";
    cout << isPalindrome(str);
    return 0;
}