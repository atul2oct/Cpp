#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. of Row"<<endl;
    int n;
    cin>>n;

    // for(int row=0;row<n;row++){
    //     // spaces
    //     for(int space=0;space<row;space++){
        
        
    //     }
    //     // stars
    //     for(int star=0;star<row;star++){
        
        
    //     }
    // }

    // upper
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<col+1;
            if(row!=col){
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
}