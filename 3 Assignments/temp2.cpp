#include<iostream>
using namespace std;

void findMissingElement(int* a,int n){

    for(int i=0;i<n;i++){
        int index = abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i] > 0){
            cout<< i+1 << " ";
        }
    }

}

int main(){
    int arr[] = {1,3,5,3,4};
    // int arr[] = {1,3,3,3,4};
    int n = sizeof(arr)/sizeof(int);// to find no. of element
    findMissingElement(arr,n);
    return 0;
}