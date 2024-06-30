// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1
#include<iostream>
#include<vector>
#include <unordered_map> 
using namespace std;

int firstRepeated(vector<int> arr, int n) {
    for(int  i=0;i<n;i++){
    // code here
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return i+1;
            }
        }
    }
    return -1;
}
// 1.count and store element of array and there occurence
// 2.first iccuurence greather than 1 is ans.
// using hash
int firstRepeated2(vector<int> arr, int n) {
        // code here
        unordered_map<int,int> hash;
        for(int  i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int  i=0;i<n;i++){
            if(hash[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
    
int main(){
    vector<int> arr {1, 5, 3, 4, 3, 5, 6};
    int ans=firstRepeated2(arr,arr.size());
    cout<<ans<<endl;
}