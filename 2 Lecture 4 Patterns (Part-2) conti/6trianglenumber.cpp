// 1
// 121
// 12321
// 1234321
// 123454321
#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int n;
    cin>>n;
    //upper part
    for(int row=0;row<n;row++){
        //left stars
        int col;
        for(col=0;col<row+1;col++){
            cout << col+1;
        }
        col--;
        for(;col>=1;col--){
            cout << col;

        }
    //next line
    cout<<endl;
    }
}