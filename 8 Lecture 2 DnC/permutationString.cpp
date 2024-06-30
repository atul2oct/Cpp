#include<iostream>
#include<string.h>
using namespace std;

void printPermutation(string & str,int i){
    // base case
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }
    // swapping
    for(int j=i ; j < str.length() ; j++ ){
        // swap
        swap(str[i],str[j]);
        // recursion calls
        printPermutation(str,i+1);
        // backtracking 1:44:00 pe explain hai
        // string by reference hai dobara swap krne se pahle jaisa bann jaega
        // jabhi mai wapas jaunga tb original string re create kr dunga
        // i=1 j=1 abc
        //  re call i=1 j=1 abc = abc recall i=1 j=2 abc = acb if not backtrack string would be change
        swap(str[i],str[j]);
    }
}

int main(){
    string str="abc";
    int i=0;
    printPermutation(str,i);
    return 0;
}