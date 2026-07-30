#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>& arr,int& n,int i){
    if(i == n-1){
        return true;
    }

    if(arr[i+1] <= arr[i]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}
int binarySearch(vector<int> &arr,int start,int end, int& key){
    if(start > end){
        return -1;
    }

    int mid = (start+end)/2;
    if(arr[mid] == key){
        return mid;
    }

    return arr[mid] < key ? binarySearch(arr,mid+1,end,key) : binarySearch(arr,start,mid-1,key);
}
int main(){
    vector<int> v{10,20,40,60,70,90,99};
    int size=v.size();
    int target=99;
    int s=0;
    int e=size-1;

    int indexOfTarget=binarySearch(v,s,e,target);

    if(indexOfTarget == -1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Found at index: "<<indexOfTarget<<endl;
    }
    return 0;
}