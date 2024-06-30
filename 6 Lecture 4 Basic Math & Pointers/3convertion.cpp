#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* p=&a;
    int **q=&p;
    // int **q=p; error: cannot convert 'int*' to 'int**'
    // **q=*q+1; invalid conversion from 'int*' to 'int'
    cout<<a<<endl;
    cout<<q<<endl;
    cout<<p<<endl;
    return 0;
}