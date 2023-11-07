#include<bits/stdc++.h>
using namespace std;
 int removeElement(vector<int>& nums, int val) {
        int right =0,left=0;
        for(int i=0; i< nums.size(); i++){
            if(nums[left] != val){
                left++;right++;
            }
            if(nums[right] == val)right++;
        }
        int count = 3;
        for(int i=right; )
    }
int main(){
    
    return 0;
}