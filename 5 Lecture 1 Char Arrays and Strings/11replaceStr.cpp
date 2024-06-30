#include<iostream>
#include<string>
using namespace std;


int main(){
    string str="hello jee kaise ho saree hello";
    string word="hi";
    // replace first 5 character with word
    str.replace(0,5,word);
    cout<<str<<endl;

    
    return 0;
}