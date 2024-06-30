#include<iostream>
using namespace std;
// no of col batana padega
void printWiseSumRow(int arr[][3],int row,int col){
    // row wise sum
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }cout<<sum<<endl;
    }
}
void printWiseSumCol(int arr[][3],int row,int col){
    // column wise sum
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }cout<<sum<<endl;
    }
}
int main(){
    int a[3][3];
    int row=3;
    int col=3;
    // input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    printWiseSumRow(a,row,col);
    printWiseSumCol(a,row,col);
}