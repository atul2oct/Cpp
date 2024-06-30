#include<iostream>
#include<string>
using namespace std;

int main(){
    // string create
    string str;
    // input
    // cin>>str;
    getline(cin,str);
    // print
    cout<<str;

    cout<<"Length: "<<str.length()<<endl;
    cout<<"is Empty: "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    // return part of a string (starting index,length of string which you want)
    cout<<str.substr(0,6)<<endl;
    string a="love";
    string b="love";
    if(a.compare(b)==0){
        cout<<"a and b are excalty same strings "<<endl;
    }else{
        if(a.compare(b)>0){
            cout<<"a is greater "<<endl;
        }else{
            cout<<"b ios greater"<<endl;
        }
    }
    return 0;
}