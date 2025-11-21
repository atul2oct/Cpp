#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void intersection(vector<int> arr1, vector<int> arr2, vector<int> ans){
    for(int i=0;i<arr1.size();i++){
        int element = arr1[i];
        for(int i=0;i<arr2.size();i++){
            if(element == arr2[i]){
                ans.push_back(element);
                arr2[i] = -1;
            }
        }
    }
    printArray(ans);
}

void unionArr(vector<int> arr1, vector<int> arr2, vector<int> ans){
    for(int i=0;i<arr1.size();i++){
        int element = arr1[i];
        ans.push_back(element);
        for(int i=0;i<arr2.size();i++){
            if(element == arr2[i]){                
                arr2[i] = -1;
            }
        }
    }

    for(int i=0;i<arr2.size();i++){
        if(arr2[i] != -1){
            ans.push_back(arr2[i]);
        }
    }
    printArray(ans);
}

int main(){
    vector<int> arr1 {1,1,2,3,4,5,6};
    vector<int> arr2 {1,1,2,4,6,8,10};
    vector <int> ans;

    intersection(arr1,arr2,ans);
    unionArr(arr1,arr2,ans);
}