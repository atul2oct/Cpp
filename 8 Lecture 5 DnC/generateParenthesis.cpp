#include<iostream>
#include<vector>
using namespace std;

void generateParenthesis(vector<string> &ans,int &n,int open,int close,string &output) {
    // base case
    if(open == 0 && close == 0){
        ans.push_back(output);
        return;
    }
    // include opening bracket
    if(open > 0){
        output.push_back('(');
        generateParenthesis(ans,n,open-1,close,output);
        // backtrack
        output.pop_back();
    }
    // include closing bracket
    if(close > open){ //opening bracket jb jada toh hi close bnracket lagaenge matlab open ka count km hoga
        output.push_back(')');
        generateParenthesis(ans,n,open,close-1,output);
        // backtrack
        output.pop_back();
    }
}

int main(){
    int n=3;
    vector<string> ans;
    int open=n;
    int close=n;
    string output="";
    generateParenthesis(ans,n,open,close,output);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}