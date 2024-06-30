// 1 
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
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
            if(col == 0 || col==row)
                cout << col+1 << " ";
            else if(row==n-1)
                cout << col+1 << " ";
            else
                cout << "  ";
        }
    cout<<endl;
    }
}