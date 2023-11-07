#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr;
    arr.push_back(nums[0]);
    for (int i = 1; i < n; i++)
        if (nums[i] != nums[i - 1])
            arr.push_back(nums[i]);
    int ans=arr.size();
    for (int j = 0; j < ans; j++)
        cout << arr[j] << " ";
    // return ans;
}
int main()
{
    vector<int> v{0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(v);
    return 0;
}