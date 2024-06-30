#include<iostream>
using namespace std;

int main(){
    int* ptr=nullptr;
    int a=10;
    cout<<a<<" "<<&a<<endl;
    *ptr=a;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}