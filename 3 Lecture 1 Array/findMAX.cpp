#include<iostream>
#include <climits>//int max k liye
using namespace std;
void printExtreme(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        // in odd size case
        if(start==end){
            cout<<arr[start]<<" ";
            break;
        }
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }
}
int findMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }return max;
}
int findMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i] < min){
            min=arr[i];
        }
    }return min;
}
int main(){
    int arr[]={1,2,5,7,4,3,9,0};
    int a[]={1,2,5,7,4,3,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout << findMax(arr,size) << endl;
    cout << findMin(arr,size) << endl;
    cout<<"Print extreme in array: "<<endl;
    printExtreme(a,sizeof(a)/sizeof(a[0]));
    cout<<endl;
    printExtreme(arr,size);
} 