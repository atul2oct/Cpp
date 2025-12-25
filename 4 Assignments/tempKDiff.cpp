#include<iostream>
#include<vector>
#include<algorithm>
#include <set>
using namespace std;

int findPair(vector<int>& arr, int k){
    sort(arr.begin(),arr.end());
    set<pair<int,int>> ans;
    int i=0,j=1;
    while(j<arr.size()){
        int diff = arr[j]-arr[i];
        if(i==j){
            j++;
        }else if(diff == k){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            ans.insert({arr[i],arr[j]});
            i++,j++;
        }else if(diff > k){
            i++;
        }else{
            j++;
        }
    }
    return ans.size();
}

int binarySearch(vector<int> &arr, int start, int x){
    int end = arr.size()-1;
    while (start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] > x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return -1;
    
}
int findPair2(vector<int>& arr, int k){
    sort(arr.begin(),arr.end());
    set<pair<int,int>> ans;
    for(int i=0;i<arr.size();i++){
        if(binarySearch(arr,i+1,arr[i]+k) != -1){
            cout<<arr[i]<<" "<<arr[i]+k<<endl;
            ans.insert({arr[i],arr[i]+k});
        }
    }
    return ans.size();
}

int main(){
    vector<int> arr {3,1};
    int k = 0;
    cout<<findPair2(arr,k);
    return 0;
}