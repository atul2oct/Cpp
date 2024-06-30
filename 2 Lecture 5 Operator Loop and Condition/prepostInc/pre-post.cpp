#include<iostream>
using namespace std;
int main(){
    cout<< "Enter no.";
    int a=5;
    // operator presidence me aega
    cout << (++a) * (++a)<<endl;
    cout << (++a) << (++a)<<endl;
    cout<<a<<endl;
    cout << (a++) << (a++);
    cout<<endl;
    a=3;
    int b=4;
    int c=(++a)*(--b);
    cout<<c;
}