// Find odd occuring element in an array where all elements are in pairs and not 2 same pairs are adjacent
#include<iostream>
#include<vector>
using namespace std;

int oddOccur(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(start == end){
            return start;
        }
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                // even == odd matlab left me ho
                // search right
                start=mid+2;
            }else{
                // ans or search left if you are in right side odd==even
                end=mid;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
                // even == odd matlab left me ho
                start=mid+1;
            }else{
                // if you are in right
                // search left 
                end=mid-1;
            }            
        }
        mid=start+(end-start)/2;
    }
    return -1;    
}

int main(){
    vector<int> arr {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans=oddOccur(arr);
    cout<<"Odd occuring element's index is: "<<ans<<endl;
    cout<<"Odd occuring element is: "<<arr[ans]<<endl;
    return 0;
}