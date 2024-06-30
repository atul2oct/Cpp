#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void SumNonAdjacent(vector<int>& arr,int i,int sum,int& maxi){
    if(i >= arr.size()){
        maxi=max(maxi,sum);
        return;
    }
    SumNonAdjacent(arr,i+1,sum,maxi);
    // inc
    sum=sum+arr[i];
    SumNonAdjacent(arr,i+2,sum,maxi);
    //exe 
    
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