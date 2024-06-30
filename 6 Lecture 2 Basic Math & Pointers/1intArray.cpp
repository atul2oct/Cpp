#include<iostream>
using namespace std;

int main(){

    int arr[4]={12,14,16,18};
    
    cout<<arr<<endl;    
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;

    int* p=arr;
    cout<<p<<endl;
    cout<<&p<<endl;

    cout<< *arr<<endl;    
    cout<< *arr + 1<<endl;
    cout<< *(arr) + 1<<endl;
    cout<< *(arr + 1)<<endl;
    cout<< *(arr + 2)<<endl;
    cout<< *(arr + 3)<<endl;

    int *q=arr+1;

    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<*(q)+1<<endl;
    cout<<*(q + 2)<<endl;

    cout<<"size of pointer array : "<<sizeof(arr)<<endl;
    cout<<"size of pointer to array : "<<sizeof(p)<<endl;
    cout<<"size of pointer to int : "<<sizeof(*p)<<endl;//return 12 then size of 12 is 4
}