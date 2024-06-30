#include<iostream>
using namespace std;
int main(){
    // declare 2d array
    int arr[3][3];
    // initalisation
    int a[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};
    /*
    r- no. of row |c-no of column | i-index of row j index of col
    index of array=c*i+j
    [1,2,3]
    [4,5,6]  6->3*1+2=5th index arr[1,2] but in memory arr[5]
    [7,8,9]
    */
    cout<<"row 3 col 3: "<<a[2][2]<<endl;

    // row-wise print
    // outer loop
    for(int i=0;i<3;i++){
        // for every row, we need to print value in each column
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // column-wise print
    // outer loop
    for(int i=0;i<3;i++){
        // for every column, we need to print value in each row
        for(int j=0;j<3;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}