#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. of Row"<<endl;
    int n;
    cin>>n;
// 1
// 1*2
// 1*2*3
// 1*2*3*4
// 1*2*3*4*5
// 1*2*3*4*5
// 1*2*3*4
// 1*2*3
// 1*2
// 1

    // upper
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
            if(col!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    // lower
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<col+1;
            if(col!=n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
        
    }

// 1
// 121
// 12321
// 1234321
// 123454321

    for(int row = 0;row<n;row++){
        // increase
        int col;
        for(col=0;col<row+1;col++){
            cout<<col+1;

        }
        col--;
        for(;col>0;col--){
            cout<<col;

        }
        cout<<endl;
    }

// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
    for(int row=0;row<n;row++){
        int col;
        for(col=0;col<row+1;col++){
            char ch = 'A'+col;
            cout<<ch;
        }

        col--;
        for(;col>0;col--){
            char ch = 'A'+col-1;
            cout<<ch;
        }
        cout<<endl;
    }
// 1 
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            if(col == 0 || col == row){
                cout<<col+1<<" ";
            }
            else if(row == n-1){
                cout<<col+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}