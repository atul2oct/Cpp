#include<iostream>
#include<vector>
using namespace std;

// find pair that upon addition gives value equal to sum
int sortzero(vector<int> arr){
    int i=0;
    int s=0;
    int e=arr.size()-1;
    while(i != e){
        if(arr[i] == 0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else{
            swap(arr[i],arr[e]);
            e--;
        }
    }
    for(auto val : arr){
        cout<<val<<" ";
    }
}
int sortzero2(vector<int> arr){
    int nextZero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] == 0){
            swap(arr[i],arr[nextZero]);
            nextZero++;
        }
    }
    for(auto val : arr){
        cout<<val<<" ";
    }
}
int main(){
    // vector<int> arr{1,0,0,0,1,1,0,0,1,1,1};
    // vector<int> arr{1 ,1, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
    vector<int> arr{ 0, 1, 0, 1, 1, 0,1,0,1,1};
    sortzero2(arr);
    
}