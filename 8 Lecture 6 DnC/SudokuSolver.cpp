class Solution {
public:

    bool isSafe(vector<vector<char>>& board,int row,int col,char val){
        int n=board[0].size();
        for(int i=0;i<n;i++){
            // check row
            if(board[row][i] == val){
                return false;
            }
            // check col
            if(board[i][col] == val){
                return false;
            }
            // check 3x3
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == val){
                return false;
            }
        }
        return true;        
    }

    bool solve(vector<vector<char>>& board) {
        int n=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // check for empty cell
                if(board[i][j] == '.'){
                    // try to fill value ranging from 1 to 9
                    for(char val='1';val<='9';val++){
                        // check for safty
                        if(isSafe(board,i,j,val)){
                            // insert
                            board[i][j]=val;
                            // recurrsion
                            bool aageKaSolution=solve(board);
                            if(aageKaSolution == true){
                                return true;
                            }else{
                                // backtrack
                                board[i][j]='.';
                            }
                        }

                    }
                    // if 1 se 9 tk koi bhi value se solution
                    // nhi nikla ,current cell pr,
                    // that means piche kahi pr galti hai ,
                    // go back by returning false
                    return false; 
                }
            }
        }
        // all cells filled
        return true;        
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

};