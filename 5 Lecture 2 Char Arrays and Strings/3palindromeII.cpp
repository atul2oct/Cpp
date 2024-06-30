// https://leetcode.com/problems/valid-palindrome-ii/
#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string str,int start,int end){
    while(start <= end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }return true;
}

bool validPalindrome(string str){
    int i=0;
    int j=str.length()-1;
    while (i <= j)
    {
        if(str[i] != str[j]){
            return checkPalindrome(str,i+1,j) || checkPalindrome(str,i,j-1);
        }else{
            i++;
            j--;
        }
    }
    return true;    
}

int main(){
    string str="aba";
    if(validPalindrome(str)){
        cout<<"it is valid palindrome"<<endl;
    }else{
        cout<<"it is not a valid palindrome"<<endl;
    }

}