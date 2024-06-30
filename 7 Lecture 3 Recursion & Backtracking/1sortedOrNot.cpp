// i/p: array
// o/p: is sorted or not true or false
#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>& arr,int& n,int i){
    // base case
    if(i == n-1){
        // array is completly traversed
        return true;
    }

    // check if current element is sorted
    if(arr[i] > arr[i+1]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}
int main(){
    vector<int> arr {10,20,30,60,50};
    int n=arr.size();
    int i=0;
    bool isSorted=checkSorted(arr,n,i);
    if(isSorted){
        cout<<"Array is sorted "<<endl;
    }else{
        cout<<"Array is not sorted "<<endl;
    }
}