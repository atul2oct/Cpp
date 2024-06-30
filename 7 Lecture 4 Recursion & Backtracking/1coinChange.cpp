#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int coinChange(vector<int>& arr,int target){
    // base case 1
    if(target == 0){
        return 0;
    }
    // base case 2
    if(target < 0){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=coinChange(arr,target-arr[i]);
        if(ans != INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int coinChange2(vector<int>& arr,int target,int output){
    // base case 1
    if(target == output){
        return 0;
    }
    // base case 2
    if(target < output){
        return INT_MAX;
    }
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=coinChange2(arr,target,output+arr[i]);
        if(ans != INT_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int> arr{1,2,3};
    int target=7;

    int ans=coinChange(arr,target);
    // int ans=coinChange2(arr,target,0);
    cout<<"Minimum no. of ways are: "<<ans<<endl;
    return 0;
}