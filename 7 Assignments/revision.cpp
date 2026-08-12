#include<iostream>
#include<string.h>
using namespace std;

void lastOccLTR(string& str, char& x, int idx, int& ans){
    // base case
    if(idx >= str.size()){
        return;
    }

    // 1 case sol
    if(str[idx] == x){
        ans = idx;
    }

    // RE
    lastOccLTR(str,x,idx+1,ans);
}

void lastOccRTL(string& str, char& x, int idx, int& ans){
    // base case
    if(idx < 0){
        return;
    }

    // 1 case sol
    if(str[idx] == x){
        ans = idx;
        return;
    }

    // RE
    lastOccRTL(str,x,idx-1,ans);
}
int main(){
    string str;
    cin>>str;
    char x;
    cin>>x;
    int ans=-1;
    // lastOccLTR(str,x,0,ans);
    // cout<<ans<<endl;
    lastOccRTL(str,x,str.size()-1,ans);
    cout<<ans<<endl;
}