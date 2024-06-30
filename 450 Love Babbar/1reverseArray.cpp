// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include<iostream>
using namespace std;
// print
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// using xor method a=a^b b=a^b a=a^b Total Time Taken: 0.04
void reverseMethod4(int arr[],int size){
    cout<<"Swap Function: ";
    int start=0;
    int end=size-1;
    while(start<=end){
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

// using a=a+b b=a-b a=a-b Total Time Taken: 0.05
void reverseMethod3(int arr[],int size){
    cout<<"Swap Function: ";
    int start=0;
    int end=size-1;
    while(start<=end){
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

// using temp to swap
void reverseMethod2(int arr[],int size){
    cout<<"Swap Function: ";
    int start=0;
    int end=size-1;
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    print(arr,size);
}

// using swap method Total Time Taken: 0.04
void reverseMethod1(int arr[],int size){
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
    reverseMethod4(arr,size);
    return 0;
}