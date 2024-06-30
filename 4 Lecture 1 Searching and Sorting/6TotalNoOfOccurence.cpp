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
int lastOccurence(vector<int> arr,int target){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int storeIndex=-1;
    while(start <= end){
        if(arr[mid] == target){
            storeIndex=mid;
            start=mid+1;
        }
        else if(arr[mid] > target){
            // search left
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        mid=start+(end-start)/2;
    }
    return storeIndex;
}
int TotalOccurence(vector<int> arr,int target){
    int FirstOccurence=firstOccurence(arr,target);
    int LasttOccurence=lastOccurence(arr,target);
    return LasttOccurence-FirstOccurence+1;
}
int main(){
    vector <int> arr{1,3,3,3,3,3,3,4,4,4,4,4,6,7};
    int target=4;
    int totaltOcc=TotalOccurence(arr,target);
    cout<<"Total occurence is: "<<totaltOcc<<endl;
}
