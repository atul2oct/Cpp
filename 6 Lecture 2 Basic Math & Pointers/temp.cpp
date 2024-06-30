#include<iostream>
using namespace std;

int main(){

    int arr[4]={12,14,16,18};
    
    cout<<arr<<endl;    
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;

    int* p=&arr;
    cout<<p<<endl;
    return 0;
}