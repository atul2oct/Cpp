#include<iostream>
using namespace std;
bool countKey(string str,int& n, int i, char& key){
    if(n <= i){
        return false;
    }
    if(str[i] == key){
        return true;
    }
    return countKey(str,n,++i,key);
}
int main(){
    string str="lovebabbar";
    int n=str.length();
    char key='p';
    int i=0;
    countKey(str,n,i,key) ? cout<<"Present" : cout<<"Not present";
    return 0;
}