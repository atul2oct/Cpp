// max sum of non-adjacent elements in an array
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void SumNonAdjacent(vector<int>& arr,int i,int sum,int& maxi){
    if(arr.size() <= i){
        maxi=max(sum,maxi);
        return;
    }
    // include
    SumNonAdjacent(arr,i+2,sum+arr[i],maxi);
    // execlude
    SumNonAdjacent(arr,i+1,sum,maxi);
}
int main(){
    vector<int> arr {1,2,3,5,4};
    int index=0;
    int sum=0;
    int maxi=INT_MIN;
    SumNonAdjacent(arr,index,sum,maxi);
    cout<<maxi<<endl;
    return 0;
}