// 658. Find K Closest Elements
#include<iostream>
#include<vector>
using namespace std;

vector<int> KclosestDiff(vector<int> arr, int k, int x){
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
int main(){
    vector<int> arr {1,2,3,4,5};
    int k=44;
    int x=3;
    vector<int> ans;
    ans = KclosestDiff(arr,k,x);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}