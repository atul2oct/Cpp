#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[],int n,int i,int maxi){
    if(n <= i){
        return 0;
    }
    if(arr[i] > maxi){
        maxi=arr[i];
    }

    return max(maxi,findMax(arr,n,i+1,maxi));
}
int main(){
    int arr[]={10,30,21,44,32,17,19,66};
    int n=8;
    int i=0;
    int maxi=INT_MIN;
    
    cout<<"Maximum no is: "<<findMax(arr,n,i,maxi);
}