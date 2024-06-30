#include<iostream>
#include<string>
using namespace std;


int main(){
    string str="hello jee kaise ho saree hello";
    string word="hi";
    // erase first 5 character
    str.erase(6,3);
    cout<<str<<endl;

    
    return 0;
}