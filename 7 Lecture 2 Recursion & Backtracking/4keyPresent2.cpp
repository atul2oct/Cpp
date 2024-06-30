#include<iostream>
using namespace std;
void countKey(string& s,int& n,int i,char& key,int& count){
    if(i >= n){
        return;
    }
    if(s[i] == key){
        count++;
    }
    countKey(s,n,i+1,key,count);
}
int main(){
    string str="lovebabbar";
    int n=str.length();
    char key='b';
    int i=0;
    int count=0;
    countKey(str,n,i,key,count);
    cout<<" ans: "<<count<<endl;
    return 0;
}