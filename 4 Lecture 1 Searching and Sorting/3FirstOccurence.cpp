// Find the first occurence of an element
#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int storeIndex=-1;
    while(start <= end){
        if(arr[mid] == target){
            // and store
            storeIndex=mid;
            // search in left
            end=mid-1;
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
    // vector <int> arr{1,3,3,3,3,3,3,4,4,4,4,4,6,7};
    vector <int> arr{0 ,0 ,1 ,1 ,2, 2, 2 ,2};
    int target=2;
    int indexOfFirstOcc=firstOccurence(arr,target);
    cout<<"First occurence is: "<<indexOfFirstOcc<<endl;
    // stl
    auto ans=lower_bound(arr.begin(),arr.end(),target);
    cout<<"last ocur by STL "<<ans-arr.begin()<<endl;
}
