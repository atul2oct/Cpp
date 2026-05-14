#include<iostream>
#include<string>
using namespace std;

bool compareString(string a,string b){

    if(a.length() != b.length()){
        return false;
    }

    else{
        for(int i=0;i<a.length();i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }

    return true;
}
int main(){
    // string str1;
    // cout<<"Enter first string"<<endl;
    // getline(cin,str1);
    // string str2;
    // cout<<"Enter second string"<<endl;
    // getline(cin,str2);

    string str1="hello jee kaise ho saree hello";
    string str2="ho";

    // if(compareString(str1,str2)){
    //     cout<<"Both strings are same"<<endl;
    // }else{
    //     cout<<"String mismatch"<<endl;
    // }
    cout<<str1.replace(6,13,str2)<<endl;
}