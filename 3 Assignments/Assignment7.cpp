// wave print of matrix
#include<iostream>
#include<vector>
#include <set> 
using namespace std;

void WavePrint(vector<vector<int>> arr) {
    int row=arr.size();
    int col=arr[0].size();
    for(int startCol=0 ; startCol < col ; startCol++){
        // even no. of column top to bottom
        if((startCol & 1) == 0){
            for(int i=0 ; i < row ; i++){
                cout<<arr[i][startCol]<<" ";
            }
        }
        // odd no. of column bottom to top
        else{
            for(int i=row-1 ; i >= 0 ; i--){
                cout<<arr[i][startCol]<<" ";
            }
        }
    }
}
    
int main(){
    vector<vector<int>> arr {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    WavePrint(arr);
    return 0;
}