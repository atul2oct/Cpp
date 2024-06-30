//     1 
//    1 2
//   1   3
//  1     4
// 1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int n;
    cin>>n;
    //upper part
    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout << " ";
        }
        //left stars
        for(int col=0;col<row+1;col++){
            if(col == 0 || col==row)
                cout << col+1 << " ";
            else if(row==n-1)
                cout << col+1 << " ";
            else
                cout << "  ";
        }
    cout<<endl;
    }
    cout << "           alternate           \n";
    for(int row=0;row<n;row++){
        //spaces
        for(int space=0;space<n-row-1;space++){
            cout << " ";
        }
        //left stars
        int start=1;
        for(int col=0;col<2*row+1;col++){
            if(row == 0 || row==n-1){
                if(col%2==0){
                    cout << start;
                    start++;
                }
                else{
                    cout << " ";
                }
            }
            else{
                if(col==0)
                    cout << 1;
                else if(col==2*row){
                    cout << row+1;
                }
                else
                    cout << " ";

            }
            
        }
    cout<<endl;
    }
}