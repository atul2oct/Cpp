#include<iostream>
#include<limits.h>
using namespace std;
// no of col batana padega
int getMin(int arr[][3],int row,int col){
    // row wise sum
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }return min;
}
int getMax(int arr[][3],int row,int col){
    // row wise sum
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }return max;
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
    cout<<"Minimum: "<<getMin(a,row,col)<<endl;
    cout<<"Maximum: "<<getMax(a,row,col)<<endl;
}