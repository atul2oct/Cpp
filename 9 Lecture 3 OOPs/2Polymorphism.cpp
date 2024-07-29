// run time polymorphism
// upcasting

#include<iostream>
using namespace std;

class Animal{
    public:
    void speakOld(){
        cout<< "speaking Old"<<endl;
    }
    virtual void speak(){
        cout<< "speaking"<<endl;
    }
    
};
class Dog:public Animal{
    public:
    
    // overriding
    void speakOld(){
        cout<< "Barking old"<<endl;
    }
    void speak(){
        cout<< "Barking"<<endl;
    }
    
};

int main(){
    // UpCasting
    Animal* a = new Dog();
    // a->speak();//speaking when virtual not in use
    //speaking Old without virtual means Animal ka (Animal* a)
    a->speakOld();
    a->speak();//Barking
    // virtual keyword jis type ka object hai mean new Dog(); iska method call hoga
    
    return 0;
}