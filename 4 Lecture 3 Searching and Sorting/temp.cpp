// Binary Search in a nearly sorted Array
#include<iostream>
#include<vector>
using namespace std;


int oddOccur(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start <= end){
        if( start == end){
            return start;
        }
        // even
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                // right
                start=mid+2;
            }else{
                end=mid;
            }
        }
        // odd
        else{
            if(arr[mid] == arr[mid-1]){
                // right
                start=mid+1;
            }else{
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