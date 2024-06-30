#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* ptr=&a;
    cout<<sizeof(ptr)<<endl;

    char ch='a';
    char* chPtr=&ch;
    cout<<sizeof(chPtr)<<endl;

    double d=1.03;
    double* dPtr=&d;
    cout<<sizeof(dPtr)<<endl;

    // bad practice SEGMENTATION FAULT
    // int* p;
    // cout<<*p<<endl; 458873079 garbage value
    // null pointer
    // int* pp=nullptr;//or use 0
    // cout<<*pp<<endl;

    // copy
    int aA=5;
    int* pP=&aA;
    int* dusraPtr=pP;
    cout<<*pP<<endl;
    cout<<*dusraPtr<<endl;

    


    return 0;
}