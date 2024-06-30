// https://leetcode.com/problems/peak-index-in-a-mountain-array/
#include<iostream>
#include<vector>
using namespace std;
// babbar
int Mountain(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + ( end - start ) / 2;
        while(start < end){
            // mid is not peak and peak is in right
            if(arr[mid] < arr[mid + 1]){
                // search right
                start = mid + 1;
            }
            // mid may be peak or peak is in left
            else{
                // mid may be peak so mid-1 may loose our peak element
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
    return start;        
}
// leetcode pe tha acha nhi laga
int Mountain2(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    while(start <= end){
        if(mid>0 && mid<arr.size()-1 && arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }else if(mid>0 && arr[mid] < arr[mid+1] || arr[mid] > arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{0,10,5,2};
    cout<<Mountain(arr)<<endl;
}