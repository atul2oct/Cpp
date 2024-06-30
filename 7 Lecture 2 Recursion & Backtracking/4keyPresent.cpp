// i/p "Babbar" key 'r'
// o/p true find whether key is present in string or not
#include<iostream>
#include<vector>
using namespace std;
// refrence variable is fast
bool isKey(string& s,int& n,int i,char& key){
    if(i >= n){
        return false;
    }
    if(s[i] == key){
        return true;
    }
    // int newi=i+1;
    return isKey(s,n,i+1,key);
}

int checkKey(string& s,int& n,int i,char& key){
    if(i >= n){
        return -1;
    }
    if(s[i] == key){
        return i;
    }
    // int newi=i+1;
    return checkKey(s,n,i+1,key);
}
// kabhi bhi mai kisi variable ko pass karunga jiske ander ans ko
// store krna ho toh uss variable ko mai pass by reference pass karunga
void storeKey(string& s,int& n,int i,char& key,vector<int>& ans){
    if(i >= n){
        return;
    }
    if(s[i] == key){
        ans.push_back(i);
    }
    storeKey(s,n,i+1,key,ans);
}
void countKey(string& s,int& n,int i,char& key,vector<int>& ans){
    if(i >= n){
        return;
    }
    if(s[i] == key){
        ans.push_back(i);
    }
    countKey(s,n,i+1,key,ans);
}
int main(){
    string str="lovebabbar";
    int n=str.length();
    char key='b';
    int i=0;
    // int ans=checkKey(str,n,i,key);
    // cout<<"ans is: "<<ans<<endl;
    vector<int> ans;
    storeKey(str,n,i,key,ans);
    cout<<"printing ans: "<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }cout<<endl;
    return 0;
}