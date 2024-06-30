// subsequences of a string
// i/p "abc"
// o/p _,a,b,c,ab,ac,bc,abc
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void printSubSequences(string str,string output,int i){
    // base case
    if(i >= str.length()){
        cout<<output<<endl;
        return;
    }
    // recursion
    // 1 execlude
    printSubSequences(str,output,i+1);
    // 2 include
    // concate ho rha hai
    output.push_back(str[i]);
    printSubSequences(str,output,i+1);
    // printSubSequences(str,output+str[i],i+1);
}

void storeSubSequences(string str,string output,int i,vector<string>& v){
    // base case
    if(i >= str.length()){
        v.push_back(output);
        return;
    }
    // recursion
    // 1 execlude
    storeSubSequences(str,output,i+1,v);
    // 2 include
    // concate ho rha hai
    output.push_back(str[i]);
    storeSubSequences(str,output,i+1,v);
}

int main(){
    string str="abc";
    string output="";
    vector<string> v;
    int i=0;
    printSubSequences(str,output,i);
    storeSubSequences(str,output,i,v);
    cout<<"Printing : "<<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}