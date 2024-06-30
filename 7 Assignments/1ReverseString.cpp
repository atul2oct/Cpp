// Reverse a string RE
#include<iostream>
#include<string.h>
using namespace std;

void reverseString(string& s,int start,int end){
    // base case
    if(start >= end){
        return ;
    }
    
    // 1 case sol
    swap(s[start],s[end]);

    // R.E. sambhal lega
    reverseString(s,start+1,end-1);;
}

int main(){
    string str;
    cin>>str;
    reverseString(str,0,str.size()-1);
    cout<<str<<endl;   
}