// k-diff pairs in an array
// https://leetcode.com/problems/k-diff-pairs-in-an-array/
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int findPairs1(vector<int>& nums, int k) {
    // sort + 2 pointer
    sort(nums.begin(),nums.end());
    int i=0;
    int j=1;
    set<pair<int,int>> ans;
    
    while(j < nums.size()){
        int diff=nums[j]-nums[i];
        if(diff == k){
            ans.insert({nums[i],nums[j]});
            cout<<nums[i]<<" "<<nums[j]<<endl;
            i++,j++;
        }
        else if(diff > k){
            i++;
        }else{
            j++;
        }
        if(i == j){
            j++;
        }
    }
    return ans.size(); 
}
// sort + binary search
int binarysearch(vector<int>& nums, int start, int target){
    int end=nums.size()-1;
    while(start <= end){
        int mid=start+(end-start)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return -1;
}
int findPairs2(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    set<pair<int,int>> ans;

    for(int i=0;i<nums.size();i++){
        if(binarysearch(nums,i+1,nums[i]+k) != -1){
            ans.insert({nums[i],nums[i]+k});
        }
    }
    return ans.size();
}

int main(){
    vector<int> arr {3};
    int k=0;
    cout<<findPairs2(arr,2)<<endl;

}