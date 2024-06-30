#include<iostream>
using namespace std;

int main(){
    int a=5;
    cout<<&a<<endl;

    int b=5;
    cout<<&a<<"     "<<&b<<endl;


    // pointer creation
    int* ptr=&a;
    // access the value ptr is pointing to
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Value of ptr is: "<<ptr<<endl;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value ptr is pointing to is: "<<*ptr<<endl;
    cout<<"Address of ptr is: "<<&ptr<<endl;


    return 0;
}