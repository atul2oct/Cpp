#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[10]={1,2};//1 2 0 0 0 0 0 0 0 0 
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[10]={0};//0 0 0 0 0 0 0 0 0 0 
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int arr3[10]={1};//1 0 0 0 0 0 0 0 0 0 
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    int a[5];
    // all elements of A are zero
    cout << "memset"<<endl;
    memset(a, 1, sizeof(a));
    for (int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    
    cout<<endl;
    int arr2[10];//garbage value
    //128 6422124 4199136 4201120 0 16722376 6422212 1975021305 16722376 6422204
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}