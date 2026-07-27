#include<iostream>
using namespace std;

void printDigits(int n){
    // base case
    if(n==0){
        return;
    }
    // recussrion
    printDigits(n/10);
    // processing
    int digit=n%10;
    cout<<digit<<" ";
}
bool countKey(string str,int& n, int i, char& key, int& count){
    if(n <= i){
        return false;
    }
    if(str[i] == key){
        return true;
    }
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