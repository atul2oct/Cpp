#include<iostream>
#include<string>

using namespace std;

bool compareStr(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }

    for(int i=0;i<str1.length();i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1;
    cout<<"Enter first string"<<endl;
    getline(cin,str1);

    string str2;
    cout<<"Enter second string"<<endl;
    getline(cin,str2);

    if(compareStr(str1,str2)){
        cout<<"Same"<<endl;
    }else{
        cout<<"different"<<endl;
    }
    
}
