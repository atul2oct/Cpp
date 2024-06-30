#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;

    while (start <= end)
    {
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        // search in left
        else if(target < element){
            end=mid-1;
        }
        // search in right
        else{//target > element
            start=mid+1;  
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}

int main(){
    int arr[]={2,4,6,8,10,12,16};
    int size=7;
    int target=20;

    int indexOfTarget=binarySearch(arr,size,target);

    if(indexOfTarget == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Found at index: "<<indexOfTarget<<endl;
    }
    return 0;
}