#include<iostream>
#include<vector>
using namespace std;
// Bubble Sort
int sort(vector<int> arr){
    int n=arr.size();
    for(int round=0;round<n-1;round++){//why n-1 because in Bubble sort it takes n-1 round to sort
                    // or
    // for(int round=1;round<n;round++){
    //     for(int j=0;j<n-round;j++){
        // inner loop -> compare adjacent elements
        for(int j=0;j<n-round-1;j++){//j<=n-round-1
            if(arr[j] > arr[j+1]){
                // swap current element with minimum element
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// optimise
int bubbleSortOptimise(vector<int> arr){
    int n=arr.size();
    // outer loop -> (n-1) rounds
    for(int round=1;round<n;round++){//why n-1 because in Bubble sort it takes n-1 round to sort
        bool swapped=false;
        // inner loop -> compare adjacent elements
        for(int j=0;j<n-round;j++){//j<=n-round-1
            if(arr[j] > arr[j+1]){
                swapped=true;
                // swap current element with minimum element
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped == false){
            // already sorted
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr {5,4,3,2,1};
    int n=arr.size();
    // outer loop -> (n-1) rounds
    for(int round=1;round<n;round++){//why n-1 because in Bubble sort it takes n-1 round to sort
        // inner loop -> compare adjacent elements
        for(int j=0;j<n-round;j++){//j<=n-round-1
            if(arr[j] > arr[j+1]){
                // swap current element with minimum element
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> a {5,10,4,3,2,1};
    bubbleSortOptimise(a);
}