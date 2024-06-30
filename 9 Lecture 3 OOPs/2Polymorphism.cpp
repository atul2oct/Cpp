// run time polymorphism
// function overriding
#include<iostream>
using namespace std;
// 22:00
class Animal{
    public:
    virtual void speak(){
        cout<< "speaking"<<endl;
    }
    
};
class Dog:public Animal{
    public:
    
    // overriding
    void speak(){
        cout<< "Barking"<<endl;
    }
    
};

int main(){
    // UpCasting
    Animal* a = new Dog();
    // a->speak();//speaking when virtual not in use
    a->speak();//Barking
    
    return 0;
}