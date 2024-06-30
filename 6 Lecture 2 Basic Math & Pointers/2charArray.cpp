#include<iostream>
using namespace std;

int main(){

    char ch[10]={'B','a','b','b','a','r'};

    char * c=ch;
    
    // cout<<c<<endl; //Babbar

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;

    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
}