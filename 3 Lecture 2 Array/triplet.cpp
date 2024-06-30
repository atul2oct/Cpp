#include<iostream>
#include<vector>
using namespace std;
// find pair that upon addition gives value equal to sum
int countPair1(vector<int> arr,int sum){
    // brute force
    int pair=0;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    pair++;
                    cout<<"pairs: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            }
        }
    }
    return pair;
}
int main(){
    vector<int> arr{10,20,30,40};
    int sum=70;
    cout<<"No. of pairs: "<<countPair1(arr,sum);
}