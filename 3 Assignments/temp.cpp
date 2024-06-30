#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int findDuplicate(vector<int>& nums) {
    int ans=-1;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]);
        if(nums[index] < 0){
            ans=index;
        }
        nums[index] *= -1;
    }
    return ans;
}
int findDuplicate2(vector<int>& nums) {
    while(nums[0] != nums[nums[0]]){
        swap(nums[0] , nums[nums[0]]);
    }
    return nums[0];
}
void findMissing1(vector<int> & nums){
    // visited mathod
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]);
        if(nums[index-1] > 0){
            nums[index-1] *= -1;
        }
    }
    for(int i=0;i<nums.size();i++){
        
        if(nums[i] > 0){
            cout<<i+1<<endl;
        }
    }

}
void findMissing(vector<int> & nums){
    // visited mathod
    int i=0;
    while(i < nums.size()){
        int index=nums[i]-1;
        if(nums[i] != nums[index]){
            swap(nums[i],nums[index]);
        }
        i++;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i] != i+1){
            cout<<i+1<<" ";
        }
    }

}
    
int main(){
    // vector<int> nums {1,3,4,2,2};
    vector<int> nums {5,3,3,3,1};
    // cout<<findMissing(nums)<<endl;
    findMissing(nums);
    
    return 0;
}