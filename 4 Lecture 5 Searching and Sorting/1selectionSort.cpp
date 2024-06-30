#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {5,4,3,2,1};
    int n=arr.size();
    // outer loop -> (n-1) rounds
    for(int i=0;i<n-1;i++){//why n-1 because in selection sort it takes n-1 round to sort
        int minIndex=i;
        // inner loop -> index of mninimum element in range -> i to n
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                // new minimum
                minIndex=j;
            }
        }
        // swap current element with minimum element
        swap(arr[i],arr[minIndex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}