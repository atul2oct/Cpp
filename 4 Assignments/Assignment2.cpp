// 658. Find K Closest Elements
#include<iostream>
#include<vector>
using namespace std;
// approach 1 2 pointers
vector<int> KclosestDiff1(vector<int> arr, int k, int x){
    // two pointer approach
    int low = 0, high =arr.size()-1;
    // k is no of arr element output needs
    while(high - low >= k){}
    // 1. traverse throught arr and compare high and low diff wrt to x 
    // 2. higher diff will be goto next place
    if(x - arr[low] > arr[high] - x){
        low++;
    }else{
        high--;
    }
    // vector<int> ans;
    // for(int i = low ; i <= high ; i++){
    //     ans.push_back(arr[i]);
    // } 
    // return ans;
    return vector<int> (arr.begin()+low,arr.begin()+high+1);
}
// binary search +  2 pointer

int lowerbound(vector<int> arr, int x){
    int start = 0, end = arr.size()-1;
    // arr =[3,5,8,10] x=15 k=2 beacuse and 10 kabhi nhi milega
    int ans = end;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] >= x){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid] > x){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    int high = lowerbound(arr,x);
    int low = high-1;
    while(k--){
        // arr=[1,1,2,3,4,5] k=4 x=-1 if(low is in negative so overflow)
        if(low < 0){
            high++;
        }else if(high >= arr.size()){
            // arr=[1,2,3,4,5] k=4 x=6 if(high is overflow)
            low--;
        }else if(x - arr[low] > arr[high] - x){
            high++;
        }else{
            low--;
        }
    }
    return vector<int> (arr.begin()+low+1,arr.begin()+high);
    
}

// leetcode best approach with binary search
// pending
int main(){
    vector<int> arr {1,2,3,4,5};
    int k=44;
    int x=3;
    vector<int> ans;
    // ans = KclosestDiff(arr,k,x);
    ans = findClosestElements(arr,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}