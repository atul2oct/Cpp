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
string removeDuplicate(string str){
    string ans = "";
    int i=0;
    while(i<str.length()){
        if(ans.length()>0 && ans[ans.length()-1] == str[i]){
            ans.pop_back();
        }else{
            ans.push_back(str[i]);
        }
        i++;
    }
    return ans;
}
string removeOccurrences (string str,string part){
    while(str.length() != 0 && str.find(part) < str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}
bool checkPalindrome(string str, int start, int end){
    while(start <= end){
        if(str[start] != str[end]){
            return false;
        }else{
            start++;
            end--;
        }
    }return true;
}
bool validPalindrome(string str){
    int start =0;
    int end = str.length()-1;
    while(start <= end){
        if(str[start] != str[end]){
            return checkPalindrome(str,start+1,end) || checkPalindrome(str,start,end-1);
        }else{
            start++;
            end--;
        }
    }
    return true;
}
int main(){
    // string str="aabbbc";
    // string ans=removeDuplicate(str);
    // cout<<"new string without adjacent duplicates are: "<<ans<<endl;

    // string str="daabcbaabcbc";
    // string part="abc";
    // string ans=removeOccurrences(str,part);
    // cout<<"new string without part are: "<<ans<<endl;

    string str="ab";
    if(validPalindrome(str)){
        cout<<"it is valid palindrome"<<endl;
    }else{
        cout<<"it is not a valid palindrome"<<endl;
    }

    // string str="aaa";
    // cout<<countSubstrings(str)<<endl;
}