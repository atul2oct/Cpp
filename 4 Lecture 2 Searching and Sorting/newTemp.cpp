#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target,int start,int end){
    int mid = start+ (end-start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end=mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int rotatedsortedArray(vector<int> arr,int target){
    // find pivot
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end - start)/2;
    int pivot = -1;
    while(start <= end){
        if(start == end){
            pivot = start;
            break;
        }
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            pivot = mid;
            break;
        }
        if(mid - 1 >= 0 && arr[mid - 1] > arr[mid]){
            pivot = mid-1;
            break;
        }
        if(arr[start] > arr[mid]){
            end=mid-1;
        }else{
            start =mid+1;
        }
    }
    // binary seach
    if(target >= arr[0] && target <= arr[pivot]){
        return binarySearch(arr,target,0,pivot);
    }else{
        return binarySearch(arr,target,pivot+1,arr.size()-1);
    }
}
int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid - 1 >= 0 && arr[mid - 1] > arr[mid]){
            return mid - 1;
        }
        if(arr[start] > arr[mid]){
            end =mid -1;
        }else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int findPivotAllCases(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start < end){
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid - 1 >= 0 && arr[mid - 1] > arr[mid]){
            return mid - 1;
        }
        if(arr[start] > arr[mid]){
            end =mid -1;
        }else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int findPivotAllCase(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(start == end){
            return start;
        }
        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(mid - 1 >= 0 && arr[mid - 1] > arr[mid]){
            return mid - 1;
        }
        if(arr[start] > arr[mid]){
            end =mid -1;
        }else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    // vector<int> arr{3,4,5,6,7,1,2};
    // vector<int> arr{1};
    // vector<int> arr{4,5,6,0,1,2,3};
    vector<int> arr{1};
    int target=1;
    int ans=rotatedsortedArray(arr,target);
    cout<<"Target index is :"<<ans<<endl;
    return 0;
}