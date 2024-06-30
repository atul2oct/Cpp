#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){

    // step 1 choose pivot element
    int pivotElement=arr[start];
    int pivotIndex=start;

    // step 2 find right position for pivot element and place it there
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i] <= pivotElement){
            count++;
        }
    }
    // jab mai loop se bahar hua, toh mere paas pivot ki right position ka index ready h
    int rightIndex = start+count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;

    // step 3 left me chotter right me bade element
    int i=start;
    int j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivotElement){
            i++;
        }
        while (arr[j] > pivotElement){
            j++;
        }
        // 2 case ho sakte h
        // A you found the elements to swap (left me bada element hai pivot se and right me chota element hai)
        // B no need to swap
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i] ,arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int start,int end){
    if(start >= end){
        return;
    }
    // partion logic
    int pivot=partition(arr,start,end);
    // RE calls
    // pivot element k left me call
    quickSort(arr,start,pivot-1);
    // pivot element k right me call
    quickSort(arr,pivot+1,end);
}
int main(){
    int arr[]={8,1,1,1,1,1,3,2,2,2,4,20,50,50,50,50,50,50,30};
    int n=19;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(auto val : arr){
        cout<<val<<" ";
    }
    return 0;

}