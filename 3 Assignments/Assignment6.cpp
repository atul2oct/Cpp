// https://practice.geeksforgeeks.org/problems/common-elements1132/1
#include<iostream>
#include<vector>
#include <set> 
using namespace std;

vector<int> firstCommon(vector<int> arr1, int n1, vector<int> arr2, int n2, vector<int> arr3, int n3) {
    int i=0,j=0,k=0;
    set<int> st;
    vector<int> ans;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            st.insert(arr1[i]);
            i++;
            j++;
            k++;
        }else if(arr1[i] < arr2[j]){
            i++;
        }else if(arr2[j] < arr3[k]){
            j++;
        }else{
            k++;
        }
    }
    for(auto val:st){
        ans.push_back(val);
    }
    return ans;
}
    
int main(){
    vector<int> arr1 {1, 5, 10, 20, 40, 80};
    vector<int> arr2 {6, 7, 20, 80, 100};
    vector<int> arr3 {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> ans=firstCommon(arr1,arr1.size(),arr2,arr2.size(),arr3,arr3.size());
    for(auto val:ans){
        cout<<val<<" ";
    }
    // cout<<ans<<endl;
}