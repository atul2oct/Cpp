// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
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
            int ans=col+1;
            char ch='A'+ans-1;
            cout << ch;
        }
        col--;
        for(;col>=1;col--){
            
            int ans=col;
            char ch='A'+ans-1;
            cout << ch;

        }
    //next line
    cout<<endl;
    }
}