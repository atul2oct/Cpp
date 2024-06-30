#include<iostream>
#include<vector>
using namespace std;

int findPivot1(vector<int>arr){
    // not working in single element case and element duplicate case
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid-1 >= 0 && arr[mid] < arr[mid-1]){
            return mid-1;
        }
        if(arr[start] >= arr[mid]){
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

int findPivot2(vector<int>arr){
    //working in all cases lecture 2
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start < end)
    {
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
int main(){
    // vector<int> arr{3,4,5,6,7};
    vector<int> arr{1};
    int ans=findPivot3(arr);
    cout<<"Pivot element is: "<<arr[ans]<<endl;
    return 0;
}