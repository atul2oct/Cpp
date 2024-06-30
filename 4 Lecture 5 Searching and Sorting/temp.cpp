#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {5,4,3,2,1};
    int n=arr.size();

    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]< arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
            
    for(auto val:arr){
        cout<<val<<" ";
    }

    return 0;
}