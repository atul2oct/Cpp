#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        if(mid-1>=start  && arr[mid-1] == target){
            return mid-1;
        }
        if(mid+1<= end && arr[mid+1]==target){
            return mid+1;
        }

        if(arr[mid] > target){
            // saearch left
            end=mid-2;
        }else{
            // search right arr[mid]<target
            start=mid+2;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    vector<int> arr{10,3,40,20,50,80,70};
    int target=70;
    cout<<"index of "<<binarySearch(arr,target)<<endl;
    return 0;
}