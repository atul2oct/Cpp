//      * 
//     * *
//    * * *
//   * * * *
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
    //star
        for(int star=0;star<row+1;star++){
            cout<<"* ";
        }
    //next line
    cout<<endl;
    }
}