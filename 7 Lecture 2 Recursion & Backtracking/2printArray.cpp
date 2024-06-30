#include<iostream>
using namespace std;

void printReverse(int arr[],int n,int i){
    // base case
    if(n <= i){
        return;
    }    
    printReverse(arr,n,i+1);
    cout<<arr[i]<<" ";
}

void print(int arr[],int n,int i){
    // base case
    if(n <= i){
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,n,++i);
}

void print2(int arr[],int n){
    // base case
    if(n == 0){
        return;
    }
    cout<<arr[0]<<" -> ";
    print2(arr+1,--n);
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    printReverse(arr,n,i);
}