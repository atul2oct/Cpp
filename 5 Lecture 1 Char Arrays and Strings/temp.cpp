#include<iostream>
#include<string>
using namespace std;

int compareString(string str1,string str2){
    if(str1.length() != str2.length()){
        return -1;
    }
    for(int i=0;i<str1.length();i++){
        if(str1[i] != str2[i]){
            return -1;
        }
    }
    return 1;
}

int main(){
    string str1="hello jee kaise ho saree hello";
    string str2="ho";
    cout<<str1.erase(0,5)<<endl;;
    cout<<str1;
    
    
    
    return 0;
}