#include<iostream>
using namespace std;

int main(){
    int arr[10]={0};

    //int* ptr=arr;
    //int* ptr=&arr[0];

    //int* ptr=&arr; cannot convert 'int (*)[10]' to 'int*' in initialization
    // arr->base address of first location
    // &arr means pure k pure 10 location ka starting address
    // dono ka address same hi hai

    // int *ptr[10]=&arr;not work
    int (*ptr)[10]=&arr;//this work
    // (*p)[i]==*(*p+i)
    for(int i=0;i<10;i++){
        cout<<ptr[i]<<endl;
    }
    for(int i=0;i<10;i++){
        cout<<*ptr[i]<<endl;
    }
    for(int i=0;i<10;i++){
        cout<<(*ptr)[i]<<endl;
    }
    return 0;
}