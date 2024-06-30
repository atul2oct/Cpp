#include<iostream>
#include<vector>
using namespace std;
// insertion sort
int main(){
    vector<int> arr {5,10,4,3,2,1};
    int n=arr.size();
    // outer loop -> (n-1) rounds
    for(int round=1;round<n;round++){//why n-1 because in insertion sort it takes n-1 round to sort
        int val=arr[round];// 1. value
        // inner loop -> compare elements and shift
        int j=round-1;
        for(;j>=0;j--){//j<=n-round-1
            if(arr[j] > val){//2.compare
                arr[j+1]=arr[j];// 3.shift current element
            }else{
                // previous elements are sorted
                break;
            }
        }
        arr[j+1]=val;//4.copy
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}