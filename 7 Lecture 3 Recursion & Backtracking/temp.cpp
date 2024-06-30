// i/p: array
// o/p: is sorted or not true or false
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

void printSubSequences(string str,string output,int i){
    // base case
    if(i >= str.length()){
        cout<<output<<" ";
        return;
    }
    printSubSequences(str,output,i+1);
    output.push_back(str[i]);
    printSubSequences(str,output,i+1);
}

void storeSubSequences(string str,string output,int i,vector<string>& v){
    if(i >= str.length()){
        v.push_back(output);
        return;
    }
    storeSubSequences(str,output,i+1,v);
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