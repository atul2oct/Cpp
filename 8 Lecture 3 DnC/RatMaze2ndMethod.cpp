#include<iostream>
#include<vector>
using namespace std;
// 50:00
int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
char direction[]={'D','L','R','U'};

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
    //
    for(int k=0;k<4;k++){
        int newX=srcX+dx[k];
        int newY=srcY+dy[k];
        char dir=direction[k];

        if(isSafe(maze,row,col,newX,newY,visited)){
            visited[newX][newY]=true;
            RatMaze(maze,row,col,newX,newY,visited,path,output+dir);
            // backtrack
            visited[newX][newY]=false;
        }
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