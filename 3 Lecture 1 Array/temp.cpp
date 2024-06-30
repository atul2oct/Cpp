#include<iostream>
using namespace std;
void printExtreme(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start <= end){
        if(start == end){
            cout<<arr[start];
            break;
        }
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }
}
int main(){
    // cout<<"Enter size of array"<<endl;
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int a[]={1,2,5,7,4,3,9};
    int size=sizeof(a)/sizeof(a[0]);
    printExtreme(a,size);
    return 0;
}