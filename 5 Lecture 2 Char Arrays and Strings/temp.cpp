#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <limits.h>
using namespace std;
int expand(string s,int i,int j) {
    int count=0;
    while(i>=0 && j<s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }return count;
}
int countSubstrings(string s) {
    int count=0; 
    for(int i=0;i<s.length();i++){
        // odd
        int oddAns=expand(s,i,i);
        count+=oddAns;
        // even
        int evenAnd=expand(s,i,i+1);
        count+=evenAnd;
    }
    return count;
}
int main(){
    string str="aaa";
    cout<<countSubstrings(str)<<endl;
}