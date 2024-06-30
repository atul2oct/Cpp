#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
    }cout<<endl;
}
}
void transpose(int arr[][3],int transposeArr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transposeArr[j][i]=arr[i][j];
        }
    }printArray(transposeArr,row,col);
}

int main(){
    int a[3][3];
    int transposeArr[3][3];
    int row=3;
    int col=3;
    // input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    transpose(a,transposeArr,row,col);
}