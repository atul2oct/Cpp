#include<iostream>
using namespace std;
// no of col batana padega
bool Search(int arr[][3],int row,int col,int element){
    // row wise sum
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==element){
                cout<<"row: "<<i<<endl<<"col: "<<j<<endl;
                return true;
            }
        }
    }return false;
}
int main(){
    int a[3][3];
    int row=3;
    int col=3;
    int find=30;
    // input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    if(Search(a,row,col,find)){
        cout<<"TRUE";
    }else{
        cout<<"FALSE";
    }
}