#include<iostream>
#include<vector>
using namespace std;
// find pair that upon addition gives value equal to sum
int countPair1(vector<int> arr,int sum){
    // brute force
    int pair=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                pair++;
                cout<<"pairs: "<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
    return pair;
}
int main(){
    vector<int> arr{1,3,5,7,2,4,6,9};
    int sum=9;
    cout<<"No. of pairs: "<<countPair1(arr,sum);
}