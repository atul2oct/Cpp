#include<iostream>
#include<vector>
using namespace std;
int main(){
    // declare
    vector <vector<int>> arr;
    vector<int> a{1};
    vector<int> b{11,22,33};
    vector<int> c{14,25};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    int row=3;
    int col=5;
    // 2d array of interger-vector <vector<int>>
    // 2d array of interger     size of outer vector/no. of rows    kis type ki value honi chaheye(initailised value)   size of inner vector/no. of col     vector k ander kya value hogi
    // vector <vector<int>> brr(    row                     ,            vector<int>                                    (col                        ,           0));
    vector <vector<int>> brr(row,vector<int>(col,0));

    for(int i=0;i<brr.size();i++){
        for(int j=0;j<brr[i].size();j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }

    vector <vector<int>> crr(5,vector<int>(5,-8));

    for(int i=0;i<crr.size();i++){
        for(int j=0;j<crr[i].size();j++){
            cout<<crr[i][j]<<" ";
        }cout<<endl;
    }
}