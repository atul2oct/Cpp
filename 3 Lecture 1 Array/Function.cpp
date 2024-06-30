#include<iostream>
using namespace std;
    void printf(int arr[],int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    void inc(int arr[],int size){
        arr[0]=arr[0]+10;
        printf(arr,2);
    }
int main(){
    // pass by refernce in function
    int arr[10]={5,6};
    inc(arr,2);
    cout<<endl;
    printf(arr,2);
    
}