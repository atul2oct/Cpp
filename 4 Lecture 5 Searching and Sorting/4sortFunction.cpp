#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr {5,4,3,2,1};
    int n=arr.size();
    // sort function
    sort(arr.begin(),arr.end());
    // print
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}