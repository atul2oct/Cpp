#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create vector (dynamic array)
    vector<int> arr;
    // 0: false 1: true
    cout<<"Is Vector Empty: "<<arr.empty()<<endl;
    int SIZE=(sizeof(arr)/sizeof(int));
    cout<<"size: "<<SIZE<<endl;
    // kitne elements pade hai
    cout<<"size by func: "<<arr.size()<<endl;
    // kitne no. store kr sakta hu
    cout<<"capacity: "<<arr.capacity()<<endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // remove last element
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> brr(10);
    cout<<"size: "<<brr.size()<<endl;
    cout<<"capacity: "<<brr.capacity()<<endl;
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }cout<<endl;
    // 0 false 1 true
    cout<<"Is empty: "<<brr.empty()<<endl;


    // initialse with -1
    vector<int> crr(10,-1);
    cout<<"size: "<<crr.size()<<endl;
    cout<<"capacity: "<<crr.capacity()<<endl;
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }


    // initialse with n element
    int n;
    cout<<endl<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<endl;
    vector<int> drr(n,-1);
    cout<<"size: "<<drr.size()<<endl;
    cout<<"capacity: "<<drr.capacity()<<endl;
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;

    // another way to inilise
    vector<int> a{10,20,30,40,50};
    cout<<"size: "<<a.size()<<endl;
    cout<<"capacity: "<<a.capacity()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;

}