#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void printf(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Search(int arr[][3], int row, int col, int element ){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(element == arr[i][j]){
                return true;
            }
        }
    }
    return false;
}

int getMin(int arr[][3],int row, int col){
    int mini = INT_MAX;

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;

}
int getMax(int arr[][3],int row, int col){
    int maxi = INT_MIN;

    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

void printWiseSumRow(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<row;j++){
            sum += arr[i][j];            
        }
        cout<<"row wise sum of "<<""<<sum<<endl;
    }
}
void printWiseSumCol(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum =0;
        for(int j=0;j<row;j++){
            sum += arr[j][i];
            cout<<"col wise sum of "<<""<<sum<<endl;
        }cout<<sum<<endl;
    }
}
void transpose(int arr[][3],int transposeArr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transposeArr[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<transposeArr[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){

    // vector<int> a {1,2};
    // vector<int> b {1};
    // vector<int> c {1,2,3};

    // vector<vector<int>> arr;

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // printf(arr);

    // int row = 3;
    // int col = 4;
    // vector<vector<int>> brr (row, vector<int>(col, 0));
    // printf(brr);

    // vector<vector<int>> crr (5, vector<int> (5, -8));
    // printf(crr);

    // int arr [3][3];
    // int a[3][3]= {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<a[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    int a[3][3];
    int row=3;
    int col=3;
    int find=30;
    int transposeArr[3][3];
    // input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    // if(Search(a,row,col,find)){
    //     cout<<"TRUE";
    // }else{
    //     cout<<"FALSE";
    // }

    // cout<<"Minimum: "<<getMin(a,row,col)<<endl;
    // cout<<"Maximum: "<<getMax(a,row,col)<<endl;

    // printWiseSumRow(a,row,col);
    // printWiseSumCol(a,row,col);
    transpose(a,transposeArr,row,col);
    
    return 0;
}