#include<iostream>
#include<vector>
using namespace std;

void printSubarray_util(vector<int>& arr,int& start,int end){
    // base case
    if(end == arr.size()){
        return;
    }
    // one case
    for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // RE calls
    printSubarray_util(arr,start,end+1);
}

void printSubarray(vector<int>& arr){
    for(int start=0;start<arr.size();start++){
        int end=start;
        printSubarray_util(arr,start,end);
    }
}

int main(){   
    vector<int> arr{1,2,3,4,5};
    printSubarray(arr);
}