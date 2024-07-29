#include<iostream>
using namespace std;

int main(){
    const int a = 5;
    cout<<a<<endl;
    // a=10;// error: assignment of read-only variable 'a'

    // to change contacnt value but does nt work in modern compiler
    // int* p = &a; //error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
    // *p = 10;
    cout<<&a<<endl;
    return 0;
}