#include<iostream>
#include<string>
using namespace std;


int main(){
    string str1="hello jee kaise ho saree hello";
    string str2="ho";
    cout<<str1.find(str2)<<endl;
    // if(str1.find("every")==string::npos)
    if(str1.find("every")==std::string::npos)
        cout<<"Not found"<<endl;

    
    return 0;
}