#include<iostream>
#include<vector>
using namespace std;

void merge(int* arr,int start,int end){
    int mid=start + (end - start) / 2;

    // length for arrays
    int len1=mid - start + 1;//m=5 s=1 length=5 5-1+1=5
    int len2=end - mid;//end-(mid+1)+1 => e-m-1+1 => e-m
    // assume to create arrays for len1 len2 length
    
    // dynamic array creation
    int* left=new int[len1];
    int* right=new int[len2];

    // copy values
    int k=start;//iterator for original array
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len1;i++){
        right[i]=arr[k];
        k++;
    }
    // merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=start;
    while (leftIndex < len1 && rightIndex < len2)
    {
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex++]=left[leftIndex++];
        }else{
            arr[mainArrayIndex++]=right[rightIndex++];
        }
    }
    // if any of array remaining
        //right remaining
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++]=right[rightIndex++];
    }
        //left remaining
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++]=left[leftIndex++];
    }
    
}
void mergeSort(int* arr,int start,int end){
    // base case
    // 1. s==e single element 
    // 2. s>e invaild array
    if(start >= end){
        return;
    }
    int mid=start + (end - start) / 2;
    // left part sort kardo recurrsion se
    mergeSort(arr,start,mid);
    // right part sort kardo recurrsion se
    mergeSort(arr,mid+1,end);

    // merge 2 sorted arrays
    merge(arr,start,end);
}
int main(){
    int arr[]= {4,13,5,13,2,12,2,2,2,2,2};
    int n=11;

    int start=0;
    int end=n-1;
    mergeSort(arr,start,end);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}