#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {5,10,4,3,2,1};
    int n = arr.size();

    for(int round = 1;round<n;round++){
        int val= arr[round];
        int j=round-1;
        for(;j>=0;j--){
            if(arr[j]>val){
                // shifting
                arr[j+1]=arr[j];
            }else{
                break;
            }
        }
        // copy
        arr[j+1]=val;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}