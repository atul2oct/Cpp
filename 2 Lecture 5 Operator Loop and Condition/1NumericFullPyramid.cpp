//     1
//    232
//   34543
//  4567654
// 567898765
#include<iostream>
using namespace std;
int main(){
    cout << "Enter no.";
    int n;
    cin >> n;
    for(int row=0;row<n;row++){
        for(int space=0;space<n-row-1;space++){
            cout << " ";
        }
        int start;
        for(int col=0;col<row+1;col++){
            start=row+col+1;
            cout << start;
        }
        start--;
        for(int rt=start;rt>row;rt--){
            cout << rt;
        }
        cout << endl;
    }
    cout<<"     Alternate     \n";
    for(int row=0;row<n;row++){
        for(int space=0;space<n-row-1;space++){
            cout << " ";
        }
        for(int col=0;col<row+1;col++){
            cout << row+col+1;
        }
        int start=2*row;
        for(int rt=0;rt<row;rt++){
            cout << start;
            start--;
        }
        cout << endl;
    }
}