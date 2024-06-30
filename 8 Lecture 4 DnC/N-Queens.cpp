#include<iostream>
#include<vector>
using namespace std;
// 0:29:00
void printSolution(vector<vector<char>> board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row,int col,vector<vector<char>> &board,int &n){
    int i=row;
    int j=col;

    // check row
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    // check upper left diagonal
    j=col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i--;
        j--;
    }
    // check bottom left diagonal
    i=row;
    j=col;
    while(i < n && j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        i++;
        j--;
    }
    // kahin pr bhi queen nahi mili
    // iska mtlab ye position safe hai
    // iska matlab return kardo true
    return true;
}

void Nqueens(vector<vector<char>> &board,int col,int &n){
    // base case
    if(col >= n){
        printSolution(board,n);
        return;
    }
    // 1 case solve krlo
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            // recurrsion
            Nqueens(board,col+1,n);
            // backtrack
            board[row][col]='-';
        }
    }
}

int main(){
    int n=4;
    // 0->empty cell
    // 1->queens
    vector<vector<char>> board(n,vector<char>(n,'-'));
    int col=0;
    Nqueens(board,col,n);
    return 0;
}