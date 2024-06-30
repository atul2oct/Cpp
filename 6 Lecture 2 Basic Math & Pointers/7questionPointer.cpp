#include<iostream>
using namespace std;

void update(int *p){

    *p=*p+10;
    cout<<"address of p is: "<<&p<<endl;
    cout<<"address stored in p is: "<<p<<endl;
}

int main(){

    int a=5;
    cout<<"address of a is: "<<&a<<endl;
    int *ptr=&a;
    cout<<"address stored in ptr is: "<<ptr<<endl;
    cout<<"address of ptr is: "<<&ptr<<endl;
    update(ptr);
    cout<<"value of a is: "<<a<<endl;

    return 0;
}