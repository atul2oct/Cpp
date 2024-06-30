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
#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int n;
    cin>>n;
    //upper part
    for(int row=0;row<n;row++){
        //left stars
        for(int col=0;col<row+1;col++){
            cout << col+1;
            if(col!=row)
                cout<<"*";
        }
    //next line
    cout<<endl;
    }
    //lower part
    for(int row=0;row<n;row++){
        //left stars
        for(int col=0;col<n-row;col++){
            cout << col+1;
            if(col!=n-row-1)
                cout<<"*";
        }
    //next line
    cout<<endl;
    }
}