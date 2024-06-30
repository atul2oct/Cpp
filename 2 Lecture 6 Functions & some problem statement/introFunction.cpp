#include<iostream>
using namespace std;
void printName(){
    int n;
    cout<<"Enter no."<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Atul"<<endl;
    }
}
void printNumber(int a){//pass by value->copy create hoga
    cout<<a<<endl;
    cout<<++a<<endl;
}
//add more main function
int main(){//pass value
    //function call or function invoke
    printName();
    int a=5;
    printNumber(a);
    cout<<a<<endl;
    //meaning of return 0,1,-1
    cout<<"Address of a is: "<<&a;
    return 0;//1,-1
}