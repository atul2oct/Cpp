#include<iostream>
using namespace std;
int main(){
    //array index->0-based indexing
    // [1,2,3,4,5]->index-->1=oth,2=1th,3=2nd,4=3rd,5=4th
    // (starting will be provided wth index 0 up next +1 and so on)
    int arr[7]={10,20,30,40,50,60};
    // arr[3]->40
    // arr index + index x (data type size)
    //arr[0]=arr(base address)104+(starting index)0x4(size of int)=104+0x4=104---10
    //arr[1]=arr+1x4=104+1x4=108---20
    //arr[2]=arr+2x4=104+2x4=112---30
    //arr[5]=arr+5x4=104+5x4=124---60    
    cout<<arr[3]<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //array input
    int ARR[10];
    cout<<"Enter the input values in array"<<endl;
    for(int index=0;index<10;index++){
        // int n;
        // cin>>n;
        // ARR[index]=n;
        cin>>ARR[index];
    }
    cout<<"Printing the input values in array"<<endl;
    for(int i=0;i<10;i++){
        cout<<ARR[i]<<" ";
    }
    
    return 0;
}