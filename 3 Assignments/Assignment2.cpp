// Move all -ve numbers to left side of an array
// 1 2 -3 4 -5 6 order not applicable
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> arr){
    for(auto value:arr){
        cout<<value<<" ";
    }
}
// dutch national flag algorithm
void moveAllNegativeToLeft(vector<int> arr){
    int l=0;
    int h=arr.size()-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }else if(arr[h]>0){
            h--;
        }else{
            swap(arr[l],arr[h]);
        }
    }print(arr);
}
int main(){
    // vector<int> arr{1,2,-3,4,-5,6};
    vector<int> arr{1,-1,-3,-4,-6};
    print(arr);
    cout<<endl;
    moveAllNegativeToLeft(arr);
}