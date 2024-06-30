#include<iostream>
#include<string>
using namespace std;

bool compareString(string a,string b){
    if(a.length() != b.length()){
        return false;
    }else{
        for(int i=0;i<a.length();i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
    
}

int main(){
    string str1;
    cout<<"Enter first string: "<<endl;
    getline(cin,str1);

    string str2;
    cout<<"Enter second string: "<<endl;
    getline(cin,str2);

    if(compareString(str1,str2) == 1){
        cout<<"Both are same";
    }else{
        if(str1.compare(str2)<0){
            // when compare A with a =-1
            cout<<"a is greater "<<endl;
        }else{
            // when compare a with A=1
            cout<<"b ios greater"<<endl;
        }
    }
    
    return 0;
}