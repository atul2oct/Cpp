#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Peak(vector<int>& arr){
    int start =0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int Peak2(vector<int>& arr){
    int start =0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start < end){
        // if(arr[mid] < arr[mid + 1]){
        //     start = mid + 1;
        // }else{
        //     end = mid;
        // }
        if(mid > 0 && mid < arr.size()-1 && arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) return mid;

        if(mid > 0 && arr[mid] < arr[mid+1] || arr[mid] > arr[mid-1]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    vector<int> arr{0,1,10,5,2};
    cout<<Peak(arr)<<endl;
    
    return 0;
}