#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* p=&a;
    int** q=&p;
// 30:00
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q<<endl;
}