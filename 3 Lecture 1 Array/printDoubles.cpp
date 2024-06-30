#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int n;
    cout<<"How many nos. you want to add in array"<<endl;
    cin>>n;
    cout<<"Enter no. to add in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // print
    for(int i=0;i<n;i++){
        int temp=arr[i]<<1;
        cout<<temp<<" ";
    }
    
}