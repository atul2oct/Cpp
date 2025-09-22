#include<iostream>
#include<vector>
using namespace std;

void findMissing(vector<int> & a, int n){
    
    // visited method
   
    for(int i=0;i<a.size();i++){
        int index = abs(a[i]);

        if(a[index - 1] > 0){
            a[index - 1] *= -1;
        }

    }

    for(int i=0;i<a.size();i++){
        if(a[i] > 0)
            cout<<i+1<<" ";        
    }       

}

void findMissing2(vector<int> & a, int n){
    
    //  sort swap
   
    // sort part
    int i=0;
    while(i < n){
        int index=a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        }
        else{
            i++;
        }
    }

    for(int i=0;i<a.size();i++){
        if(a[i] != i+1)
            cout<<i+1<<" ";        
    }       

}

int main(){
    vector<int> arr {1,3,5,3,4};
    findMissing2(arr,arr.size());
    return 0;
}