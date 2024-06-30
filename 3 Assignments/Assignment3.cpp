// https://leetcode.com/problems/find-the-duplicate-number/
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
// use binary search for without modify array
// https://www.youtube.com/watch?v=-2nL1Y21_7U
// https://www.youtube.com/watch?v=_n5MR8IxR6c

// approach sort
int findDuplicate(vector<int>& nums) {
    std::sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return nums[i];
        }
    }
    return -1;
        
}
// approach -ve marking method
int findDuplicate2(vector<int>& nums) {
    int ans = -1;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]);

        // if already visited
        if( nums[index] < 0 ){
            ans=index;
            break;
        }
        
        nums[index] *=-1;
    }
    return ans;        
}

// Positioning Method
int findDuplicate3(vector<int>& nums) {
    while(nums[0] != nums[nums[0]]){
        swap(nums[0] , nums[nums[0]]);
    }
    return nums[0];        
}
// Without modifying Use Binary Search

int main(){
    vector<int> nums {1,3,4,2,2};
    cout<<findDuplicate3(nums)<<endl;
    
    return 0;
}