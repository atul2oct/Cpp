// complie time polymorphism
// function overloading

#include<iostream>
using namespace std;

class Maths{
    public:
    int sum(int a,int b){
        cout<<"i am in First Signature"<<endl;
        return a+b;
    }
    int sum(int a,int b,int c){
        cout<<"i am in second Signature"<<endl;
        return a+b+c;
    }
    int sum(int a,float b){
        cout<<"i am in third Signature"<<endl;
        return a+b;
    }
    // must be same return type
    // double sum(int a,int b){
    //     return 500;
    // }
};

int main(){
    Maths obj;
    cout<<obj.sum(2,5)<<endl;
    cout<<obj.sum(2,5,2)<<endl;
    cout<<obj.sum(2,5.12f)<<endl;
    return 0;
}