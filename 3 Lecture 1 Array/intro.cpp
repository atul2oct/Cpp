#include<iostream>
using namespace std;
int main(){
    //array declare
    int arr[7];
    //array address or base address
    cout<<arr<<endl;//why in pointer
    cout<<&arr<<endl;
    cout<<"Array created Successfully"<<endl;
    // char array
    char ch[106];
    // boolean array
    bool b[10];

    // array initailise
    int arr1[]={2,3,4,5,6};
    int arr2[5]={2,3,4,5,6};
    int arr3[10]={2,3,4,5,6};//remain me 0 store hoga 2 3 4 5 6 0 0 0 0 0 
    cout<<"arr3"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<arr1<<endl;
    cout<<arr2<<endl;
    //error: too many initializers for 'int [4]'
    // int arr4[4]={2,3,4,5,6};
    char ch1[10]={'a','b','c'};
    // bad approch baad me dynamic array me aega
    int n;
    cin>>n;
    int ARR[n];
    // use instead this
    int TakeArr[1000];


    return 0;
}