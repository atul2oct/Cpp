#include<iostream>
using namespace std;
void printExtreme(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start < end){
        int a = arr[start];
        int b = arr[end];
        a= a^b;
        b=a^b;
        a=a^b;
        arr[start] = a;
        arr[end] = b;
        start++;
        end--;
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
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

    int a[]={1,2,5,7,4,3,9,0};
    int a2[]={1,2,5,7,4,3,9,};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(a2)/sizeof(a2[0]);
    printExtreme(a,size1);
    cout<<endl;
    printExtreme(a2,size2);
    return 0;
}