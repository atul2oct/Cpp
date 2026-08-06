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
int cutSegments(int n, int x, int y, int z){
    if(n == 0){
        return 0;
    }

    if(n < 0){
        return INT_MIN;
    }

    int ans1 = cutSegments(n-x,x,y,z) + 1;
    int ans2 = cutSegments(n-y,x,y,z) + 1;
    int ans3 = cutSegments(n-z,x,y,z) + 1;

    int ans = max(ans1,max(ans2,ans3));
    return ans;
}
int main(){
    // vector<int> arr{1,2,3};
    // int target=7;

    // int ans=coinChange(arr,target);
    // // int ans=coinChange2(arr,target,0);
    // cout<<"Minimum no. of ways are: "<<ans<<endl;

    int n=8;
    int x=3;
    int y=3;
    int z=3;

    int ans=cutSegments(n,x,y,z);
    if(ans < 0)
        ans=0;
    cout<<"Max no of segments are: "<<ans<<endl;
    
    return 0;
}