// Find the first occurence of an element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lastOccurence(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int storeIndex=-1;
    while(start <= end){
        if(arr[mid] == target){
            // and store
            storeIndex=mid;
            // search in right
            start=mid+1;
        }
        else if(arr[mid] > target){
            // search in left
            end=mid-1;
        }
        else{
            // search om right
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return storeIndex;
}

int main(){
    vector <int> arr{1,3,3,3,3,3,3,4,4,4,4,4,6,7};
    int target=4;
    int indexOfFirstOcc=lastOccurence(arr,target);
    cout<<"last occurence is: "<<indexOfFirstOcc<<endl;
    auto ans=upper_bound(arr.begin(),arr.end(),target);
    cout<<"last ocur by STL "<<ans-arr.begin()<<endl;
}
