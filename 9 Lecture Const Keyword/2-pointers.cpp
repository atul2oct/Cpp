// const with pointers

#include<iostream>
using namespace std;

int main(){

    // type 1 const data, non const

    //const brefore * then data will be const
    const int* a = new int(10); //const data, non const pointer
    // you can also write in this way int const* a = new int(10);
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<*a<<endl;
    //*a = 10; //cant change the content of pointer.
    //error: assignment of read-only location '* a'

    int b=20;
    a = &b; //pointer itself can be reassigned.
    cout<<*a<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;

    // type 2 const pointer, non const data

    //const after * then data will be non const pointer will be const
    int* const aa = new int(10); 
    cout<<*a<<endl;
    *aa = 20;
    // pointer const hai
    // aa = &b; //error: assignment of read-only variable 'aa'
    cout<<*aa<<endl;

    // type 3 const pointer, const data
    const int* const aaa = new int(10); 
    cout<<*aaa<<endl;
    // *aaa = 20; //error: assignment of read-only location '*(const int*)aaa' 
    // aaa=&b; //error: assignment of read-only variable 'aaa'
    return 0;
}