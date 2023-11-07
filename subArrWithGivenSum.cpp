#include <bits/stdc++.h>
using namespace std;

vector<int> sumArr(vector<int> arr, int n, long long s)
{
    vector<int> v1;
    long sum = arr[0], i = 0, j = 1;\
    if(s==0){
        v1.push_back(-1);
        return v1;
    }
    while (sum != s)
    {
        if (sum < s && j < n)
        {
            sum += arr[j];
            j++;
        }
        if (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (j == n && sum < s)
        {
            v1.push_back(-1);
            return v1;
        }
    }
    if (sum == s)
    {
        v1.push_back(i+1);
        v1.push_back(j);
        return v1;
    }
    else
    {
        v1.push_back(-1);
        return v1;
    }
}
int main()
{
    vector<int> arr{1,2,3,4}, result;
    result = sumArr(arr, arr.size(), 0);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}