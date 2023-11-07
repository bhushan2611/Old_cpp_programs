#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    int hsh[26] = {0};
    int n = magazine.length();
    int m = ransomNote.length();
    for (int i = 0; i < n; i++)
        hsh[int(magazine[i]) - 97]++;

    int j = 0;
    while (m > 0)
    {
        hsh[int(ransomNote[j]) - 97]--;
        ++j;
        --m;
    }
    for (int k = 0; k < 26; k++)
    {
        if (hsh[k] < 0)
            return false;
    }
    return true;
}
int main()
{
    string mag = "aaba", ran = "aab";
    cout << canConstruct(ran, mag);
    return 0;
}
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
// a b c d e f g h i j k  l  m  n  o  p  q  r  s  t  u  v  w  x  y  z