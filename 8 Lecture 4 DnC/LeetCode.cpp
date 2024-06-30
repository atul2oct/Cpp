class Solution {
public:
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagonal;
    unordered_map<int,bool> lowerLeftDiagonal;
    void storeSolution(vector<vector<char>> board,int n,vector<vector<string>> &ans){
        vector<string> temp;
        for(int i=0;i<n;i++){
            string output="";
            for(int j=0;j<n;j++){
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    bool isSafe(int &row,int &col,vector<vector<char>> &board,int &n){
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

    void Nqueens(vector<vector<char>> &board,int col,int &n,vector<vector<string>> &ans){
        // base case
        if(col >= n){
            storeSolution(board,n,ans);
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
                Nqueens(board,col+1,n,ans);
                // backtrack
                board[row][col]='.';
                rowCheck[row]=false;
                upperLeftDiagonal[n-1+col-row]=false;
                lowerLeftDiagonal[row+col]=false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        // 0->empty cell
        // 1->queens
        vector<vector<char>> board(n,vector<char>(n,'.'));
        int col=0;
        Nqueens(board,col,n,ans);
        return ans;        
    }
};