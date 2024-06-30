// https://leetcode.com/problems/search-in-rotated-sorted-array/
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int target,int start,int end){
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}

int findPivot(vector<int>arr){
    // wrong ans in case {1,3} use pivot 3 function
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start < end)
    {
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
            return mid;
        }
        if(arr[start] >= arr[mid]){
            // search lt
            end=mid-1;
        }
        else{
            // seqarch rt
            start=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int findPivot3(vector<int>arr){
    //working in all cases connect week 4
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        if(start == end){
            return start;
        }
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
            return mid-1;
        }
        if(arr[start] > arr[mid]){
            // search lt
            end=mid-1;
        }
        else{
            // seqarch rt
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int search(vector<int> arr,int target){
    int pivotIndex=findPivot(arr);

    if(target >= arr[0] && target<=arr[pivotIndex]){
        // search A
        int ans=binarySearch(arr,target,0,pivotIndex);
        return ans;
    }
    if(pivotIndex+1 < arr.size() && target >= arr[pivotIndex+1] && target <= arr[arr.size()-1]){
        // search B
        int ans=binarySearch(arr,target,pivotIndex+1,arr.size()-1);
        return ans;
    }
    return -1;


}

int main(){
    // vector<int> arr{4,5,6,0,1,2,3};
    vector<int> arr{1};
    int target=1;
    int ans=search(arr,target);
    cout<<"Target index is :"<<ans<<endl;
    return 0;
}