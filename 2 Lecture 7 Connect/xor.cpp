#include<iostream>
using namespace std;
int main(){
    int a=1^2^3^4^4^2^1;//different pe no aega
    cout<<a<<endl;
    cout<<(1^2)<<endl;//bits add ho jaenge
    //001
    //010
//and 011=3
    cout<<(2^2)<<endl;//same pr 0

    //conditional/ternary operator
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    //      condition  ? true   :   false
    string str=age>=18?"can vote":"cannot vote";
    // (age>=18) ? cout<<"can vote":cout<<"cannot vote";
    cout<<str<<endl;
}