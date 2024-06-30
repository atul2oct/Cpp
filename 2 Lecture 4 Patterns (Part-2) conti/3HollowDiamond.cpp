//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *
#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int n;
    cin>>n;

    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }
        //star and spcaes
        for(int starspace=0;starspace<2*row+1;starspace++){
            if(starspace==0 || starspace==2*row)
                cout<<"*";
            else
                cout<<" ";
        }
    //next line
    cout<<endl;
    }

    for(int invertrow=0;invertrow<n;invertrow++){
        //spaces
        for(int space=0;space<invertrow;space++){
            cout<<" ";
        }
        //star and spaces
        for(int starspace=0;starspace<2*n-(2*invertrow-1);starspace++){
            if(starspace==0 || starspace==2*n-2*invertrow-2)
                cout<<"*";
            else
                cout<<" ";
        }
    //next line
    cout<<endl;
    }
}