#include<iostream>
#include<string.h>
using namespace std;

void lastOccLTR(string& s,char& x,int i,int& ans){
    // base case
    if(i >= s.size()){
        return ;
    }
    // 1 case sol
    if(s[i] == x){
        ans=i;
    }
    // R.E. sambhal lega
    lastOccLTR(s,x,i+1,ans);
}

void lastOccRTL(string& s,char& x,int i,int& ans){
    // base case
    if(i < 0){
        return ;
    }
    // 1 case sol
    if(s[i] == x){
        ans=i;
        return;
    }
    // R.E. sambhal lega
    lastOccRTL(s,x,i-1,ans);
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
    // hw STL strrchr function reverse(str.begin(),str.end());
}