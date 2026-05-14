#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[100];
    cout<<"Enter your name "<<endl;
    // cin>>ch;//atul yadav

    // cout<<ch<<endl;//atul
    cin.getline(ch,50);//atul yadav
    cout<<ch;//atul yadav

    return 0;
}