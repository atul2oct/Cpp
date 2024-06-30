#include<iostream>
using namespace std;

int util(int* p){//this is pass by value  yaha pe copy create hoi hai
    p=p+1;
    cout<<&p<<endl;
}
int util2(int* p){//this is pass by value  yaha pe copy create hoi hai
    *p=*p+1;
}
int main(){
    int a=5;
    int* p=&a;
    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    util(p);
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    cout<<"Before"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    util2(p);
    cout<<"After"<<endl;
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    return 0;
}