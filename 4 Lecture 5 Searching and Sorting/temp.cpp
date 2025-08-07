#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr {5,4,3,2,1};
    // vector<int> arr {1,2,3,4,5};
    int n=arr.size();

// selection sort
    // for(int i = 0; i< n-1;i++){
    //     int minIndex = i;
    //     for(int j = i + 1; j<n ; j++){
    //         if(arr[j] < arr[minIndex]){
    //             minIndex = j;
    //         }
    //     }
    //     swap(arr[minIndex],arr[i]);
    // }

    // bubble sort
    // for(int round = 1; round<n;round++){
    //     bool isSwap = false;
    //     for(int j = 0;j<n-round;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //             isSwap=true;
    //         }
    //     }
    //     if(!isSwap){
    //         break;
    //     }        
    // }

    // insertion sort
    for(int round = 0; round<n;round++){
        // fetch
        int val = arr[round];
        int j = round -1;
        for(;j>= 0;j--){
            // compare
            if(arr[j] > val){
                // shift
                arr[j+1] = arr[j];
            }else{
                // kuch ni
                break;
            }
        }
        // copy 
        arr[j+1] = val;
    }
    for(auto val:arr){
        cout<<val<<" ";
    }

    return 0;
}