#include<iostream>
using namespace std;

int main(){

    int arr[4]={12,14,16,18};
    
    cout<<arr<<endl;    
    cout<<&arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    //arr decays to int*
    int* p=&arr; // But &arr means address of the entire array int (*)[4]    pointer to an array of 4 integers
    //An int (*)[4] cannot be assigned to an int*

    //Correct ways
    //1. Pointer to first element (most common)
    int* p = arr;
    int* p = &arr[0];
    //2. Pointer to the whole array If you actually want the address of the whole array:
    int arr2[4] = {1,2,3,4};
    int (*ptr)[4] = &arr2;

    //Here:    ptr is a pointer to an array of 4 integers.    *ptr is the entire array.
    //Access elements like:
    cout << (*ptr)[0] << endl;   // 1
    cout << (*ptr)[1] << endl;   // 2
    
    cout<<p<<endl;
    return 0;
}