#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr,int start,int end,int& target){
    // base case
    // case 1 key not found return -1
    if(start > end){
        return -1;
    }
    // case 2 key found return index 
    int mid=start+(end-start)/2;
    if(arr[mid] == target){
        return mid;
    }
    // return (arr[mid] < target) ? binarySearch(arr,mid+1,end,target) : binarySearch(arr,start,mid-1,target);
    
    // arr[mid] < key -> search right
    if(arr[mid] < target){
        return binarySearch(arr,mid+1,end,target);
    }
    // arr[mid] > key -> search left
    else{
        return binarySearch(arr,start,mid-1,target);
    }
}

int main(){
    vector<int> v{10,20,40,60,70,90,99};
    int size=v.size();
    int target=99;
    int s=0;
    int e=size-1;

    int indexOfTarget=binarySearch(v,s,e,target);

    if(indexOfTarget == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Found at index: "<<indexOfTarget<<endl;
    }
    return 0;
}