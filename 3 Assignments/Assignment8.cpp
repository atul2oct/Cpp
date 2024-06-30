// spiral print of matrix
#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralPrint(vector<vector<int>> arr) {
    int m=arr.size();
    int n=arr[0].size();
    int total_elements=m*n;
    int startingRow=0;
    int endingCol=n-1;
    int endingRow=m-1;
    int startingCol=0;

    int count=0;
    vector<int> ans;

    while(count < total_elements){
        // printing starting row
        for(int i = startingCol ; i <= endingCol && count < total_elements ; i++){
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
        // printing ending col
        for(int i = startingRow ; i <= endingRow && count < total_elements ; i++){
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;
        // printing ending row
        for(int i = endingCol ; i >= startingCol && count < total_elements ; i--){
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;
        // printing starting col
        for(int i = endingRow ; i >= startingRow && count < total_elements ; i--){
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
    
}
    
int main(){
    // vector<vector<int>> arr {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> arr {{1,2,3,4,5,6},
                             {7,8,9,10,11,12},
                             {13,14,15,16,17,18},
                              {19,20,21,22,23,24},
                              {25,26,27,28,29,30}};
    vector<int> ans=SpiralPrint(arr);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}