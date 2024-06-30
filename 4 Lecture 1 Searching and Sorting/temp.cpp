#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector <int> arr,int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start <= end){
        // target found
        if(arr[mid] == target){
            ans=mid;
            end=mid-1;
        }else if(arr[mid] < target){
            // search right 
            start=mid+1;
        }else{
            // search left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lasttOccurence(vector <int> arr,int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start <= end){
        // target found
        if(arr[mid] == target){
            ans=mid;
            start=mid+1;
        }else if(arr[mid] < target){
            // search right 
            start=mid+1;
        }else{
            // search left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int total(vector <int> arr,int size,int target){
    int ans1=firstOccurence(arr,size,target);
    int ans2=lasttOccurence(arr,size,target);
    return ans2-ans1+1;
}
int main(){
    vector <int> arr{0 ,0 ,1 ,1 ,2, 2, 2 ,2};
    int target=2;
    cout<<total(arr,arr.size(),target)<<endl;

    // int indexOfTarget=total(arr,arr.size(),target);

    // if(indexOfTarget == -1){
    //     cout<<"Target not found"<<endl;
    // }
    // else{
    //     cout<<"Found at index: "<<indexOfTarget<<endl;
    // }
    return 0;
}