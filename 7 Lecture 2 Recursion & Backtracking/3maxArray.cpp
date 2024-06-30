#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
void findMax(int arr[],int n,int i,int& maxi){
    if(n <= i){
        return;
    }
    // 1st case solve krna h
    // currwent element ko check kro for max
    if(arr[i] > maxi){
        maxi=arr[i];
    }
    // baki recursion sambhal lega

    findMax(arr,n,i+1,maxi);
}
void findMin(int arr[],int n,int i,int& mini){
    if(i >= n){
        return ;
    }

    mini=min(mini,arr[i]);

    findMin(arr,n,i+1,mini);
}
int main(){
    int arr[]={10,30,21,44,32,6,17,19,66};
    int n=8;
    int i=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    findMax(arr,n,i,maxi);
    findMin(arr,n,i,mini);
    cout<<"Maximum no is: "<<maxi<<endl;
    cout<<"Maximum no is: "<<mini<<endl;
}