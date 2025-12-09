#include<iostream>
#include<vector>
using namespace std;

int oddOccur(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(start == end){
            return start;
        }
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                // left me ho search rt
                start = mid+2;
            }else{
                // mid is ans or rt me ho
                end=mid;
            }
        }else{
            // mid is odd toh ans nhi hoga
            if(arr[mid-1] == arr[mid]){
                // even == odd means left me ho search rt
                start = mid+1;
            }else{
                // rt me ho left me search kro
                end=mid-1;
            }
        }
        mid = start + (end-start)/2;
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