#include<iostream>
#include <climits>//int max k liye
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseMethod3(int arr[],int size){
    cout<<"XOR Method: ";
    int start=0;
    int end=size-1;
    for(int i=0;i<size/2;i++){
        int a=arr[start];
        int b=arr[end];
        a=a^b;
        b=a^b;
        a=a^b;
        arr[start]=a;
        arr[end]=b;
        start++;
        end--;
    }
    print(arr,size);
}

void reverseMethod2(int arr[],int size){
    cout<<"+/- Method: ";
    int start=0;
    int end=size-1;
    for(int i=0;i<size/2;i++){
        int a=arr[start];
        int b=arr[end];
        a=a+b;
        b=a-b;
        a=a-b;
        arr[start]=a;
        arr[end]=b;
        start++;
        end--;
    }
    print(arr,size);
}

void reverseMethod1(int arr[],int size){
    // swap using temp
    cout<<"Temp Method: ";
    int start=0;
    int end=size-1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    print(arr,size);
}

void reverseMethod0(int arr[],int size){
    // swap using temp
    cout<<"Temp Method: ";
    int start=0;
    int end=size-1;
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
    print(arr,size);
}

void reverse(int arr[],int size){
    // swap
    //exetrem element ko swap kr diya
    cout<<"Swap Function: ";
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    print(arr,size);
}

int main(){
    int arr[]={1,2,5,7,4,3,9,0};
    int a[]={1,2,5,7,4,3,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,size);
    reverseMethod1(arr,size);
    reverseMethod2(arr,size);
    reverseMethod3(arr,size);
    size=sizeof(a)/sizeof(a[0]);
    reverse(a,size);
    reverseMethod1(a,size);
    reverseMethod2(a,size);
    reverseMethod3(a,size);
}