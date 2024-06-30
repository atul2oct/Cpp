#include<iostream>
using namespace std;

int main(){

    char ch[10]="SherBano";

    char* c=ch;
    
    // cout<<c<<endl; //Babbar

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<*(ch+3)<<endl;

    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<*(c+3)<<endl;
    cout<<c+2<<endl;
    cout<<c+8<<endl;
}