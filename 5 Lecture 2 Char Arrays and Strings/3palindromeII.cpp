// https://leetcode.com/problems/valid-palindrome-ii/
#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s, int start, int end) {
        while(start < end){
            if(s[start++] != s[end--])
                return false;
        }
        return true;        
}

bool validPalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while (i <= j)
    {
        if(str[i] != str[j]){
            return checkPalindrome(str,i+1,j) || checkPalindrome(str,i,j-1);
        }else{//no need for else just i+++ j-- 
            i++;
            j--;
        }
    }
    return true;    
}
    // bool checkPalindrome(string s, int start, int end) {
    //     while(start < end){
    //         if(s[start++] != s[end--])
    //             return false;
    //     }
    //     return true;
        
    // }
    // bool validPalindrome(string s) {
    //     int start = 0;
    //     int end = s.length() - 1;
    //     while(start < end){
    //         if(s[start++] != s[end--])
    //             return checkPalindrome(s,start,end+1) || checkPalindrome(s,start-1,end);
    //     }
    //     return true;
        
    // }

int main(){
    string str="aba";
    if(validPalindrome(str)){
        cout<<"it is valid palindrome"<<endl;
    }else{
        cout<<"it is not a valid palindrome"<<endl;
    }

}