// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****
#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int n;
    cin>>n;
    //upper part
    for(int row=0;row<n;row++){
        //left stars
        for(int Lstar=0;Lstar<n-row;Lstar++){
            cout << "*";
        }
        //spaces
        for(int space=0;space<row*2+1;space++){
            cout<<" ";
        }
        //right stars
        for(int Rstar=0;Rstar<n-row;Rstar++){
            cout << "*";
        }
    //next line
    cout<<endl;
    }
    //lower part
    for(int row=0;row<n;row++){
        //left stars
        for(int Lstar=0;Lstar<row+1;Lstar++){
            cout << "*";
        }
        //spaces
        for(int space=0;space<2*(n-row-1)+1;space++){
            cout<<" ";
        }
        //right stars
        for(int Rstar=0;Rstar<row+1;Rstar++){
            cout << "*";
        }
    //next line
    cout<<endl;
    }
}