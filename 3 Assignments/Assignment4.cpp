#include<iostream>
#include<vector>
using namespace std;

void findMissing(vector<int> & a, int n){
    // visited Method
    for(int i=0;i<n;i++){
        // for marking visited
        int index=abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            cout<<i+1<<" ";
        }
    }
}

void findMissing2(vector<int> & a, int n){
    // sort swap Method
    int i=0;
    while(i<n){
        // sorting part
        int index=a[i] - 1;
        if(a[index] != a[i]){
            swap(a[i],a[index]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        //printing missing  
        if(a[i] != i+1){
            cout<<i+1<<" ";
        }
        
    }
}

int main(){
    vector<int> arr {1,3,3,3,4};
    findMissing2(arr,arr.size());
    return 0;
}