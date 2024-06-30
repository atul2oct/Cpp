#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// 1:13:42
unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagonal;
unordered_map<int,bool> lowerLeftDiagonal;
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
    if(rowCheck[row]==true)
        return false;
    // check upper left diagonal
    if(upperLeftDiagonal[n-1+col-row]==true)
        return false;
    // check bottom left diagonal
    if(lowerLeftDiagonal[row+col]==true)
        return false;
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
            rowCheck[row]=true;
            upperLeftDiagonal[n-1+col-row]=true;
            lowerLeftDiagonal[row+col]=true;
            // recurrsion
            Nqueens(board,col+1,n);
            // backtrack
            board[row][col]='-';
            rowCheck[row]=false;
            upperLeftDiagonal[n-1+col-row]=false;
            lowerLeftDiagonal[row+col]=false;
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