#include<iostream>
#include<vector>
using namespace std;
// Bubble Sort
int sort(vector<int> arr){}

int main(){
    vector<int> arr {5,4,3,2,1};
    // vector<int> arr {5,10,4,3,2,1};
    // vector<int> arr {1,2,3,4,5,6};
    int n = arr.size();

    for(int round = 1;round<n;round++){
        int swapped = 0 ;
        for(int j=0;j<n-round;j++){
            if(arr[j]>arr[j+1]){
                swapped++;
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<"Count "<<swapped<<endl;
        if(swapped == 0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}