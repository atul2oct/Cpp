#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool checkPalindrome(string& s, int start,int end){
    // base case
    if(start >= end){
        return true;
    }
    // one case solve
    if(s[start] != s[end]){
        return false;
    }
    // recurrsion samghal lega
    return checkPalindrome(s,start+1,end-1);
}
int main(){
    string s="racezcar";
    checkPalindrome(s,0,s.length()-1) ? cout<<"Palindrome" : cout<<"Not Palindrome";
}