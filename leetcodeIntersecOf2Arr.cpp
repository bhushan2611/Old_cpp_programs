#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> vec;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int move = 0;
    for (int i = 0; i < nums1.size(); ++i)
    {
        for (int j = move; j < nums2.size(); ++j)
        {
            if (nums1[i] == nums2[j])
            {
                move = j + 1;
                vec.push_back(nums1[i]);
                break;
            }
        }
    }
    return vec;
}
int main()
{
    vector<int> v1{4,9,5};
    vector<int> v2{9,4,9,8,4};
    vector<int> vec;
    vec=intersect(v1,v2);
    for(int i=0; i<vec.size(); ++i){
        cout<<vec[i]<<" ";
    }
    return 0;
}