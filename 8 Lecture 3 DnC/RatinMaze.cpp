#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int maze[3][3],int row,int col,int srcX,int srcY,vector<vector<bool>>& visited){
    if(
        (srcX >= 0 && srcX < row) &&
        (srcY >= 0 && srcY < col) &&
        (maze[srcX][srcY] == 1) && (visited[srcX][srcY] == false)
    ){
        return true;
    }else{
        return false;
    }
}
void RatMaze(int maze[3][3],int row,int col,int srcX,int srcY,vector<vector<bool>>& visited,vector<string>& path,string output){
    // base case
    if(srcX == row-1 && srcY == col-1){
        path.push_back(output);
        return;
    }
    // down i+1 , j
    if(isSafe(maze,row,col,srcX+1,srcY,visited)){
        visited[srcX+1][srcY]=true;
        RatMaze(maze,row,col,srcX+1,srcY,visited,path,output+'D');
        // backtrack
        visited[srcX+1][srcY]=false;

    }
    // left i , j-1
    if(isSafe(maze,row,col,srcX,srcY-1,visited)){
        visited[srcX][srcY-1]=true;
        RatMaze(maze,row,col,srcX,srcY-1,visited,path,output+'L');
        // backtrack
        visited[srcX][srcY-1]=false;

    }
    // right i , j+1
    if(isSafe(maze,row,col,srcX,srcY+1,visited)){
        visited[srcX][srcY+1]=true;
        RatMaze(maze,row,col,srcX,srcY+1,visited,path,output+'R');
        // backtrack
        visited[srcX][srcY+1]=false;

    }
    // up i-1 , j
    if(isSafe(maze,row,col,srcX-1,srcY,visited)){
        visited[srcX-1][srcY]=true;
        RatMaze(maze,row,col,srcX-1,srcY,visited,path,output+'U');
        // backtrack
        visited[srcX-1][srcY]=false;

    }
}
int main(){
    int maze[3][3] {
    {1,0,0},
    {1,1,0},
    {1,1,1}};
    if(maze[0][0] == 0){
        cout<<"No path exist"<<endl;
        return 0;
    }
    
    int row=3;
    int col=3;
    
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string> path;
    string output="";

    RatMaze(maze,row,col,0,0,visited,path,output);
    if(path.size() == 0){
        cout<<"No path exist"<<endl;
    }
    for(auto i:path){
        cout<<i<<endl;
    }

}