// run time polymorphism
// downcasting

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
    void speakNew(){
        cout<< "speaking new"<<endl;
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
    virtual void speakNew(){
        cout<< "Barking new"<<endl;
    }
};

int main(){
    // UpCasting
    Dog* a = (Dog*)new Animal();
    // a->speak();//speaking 
    //speaking Old without virtual means Animal ka (Animal* a)
    a->speakOld();//Barking old when virtual not in use method calls for ka (Animal* a)

    // virtual keyword jis type ka object hai mean new Animal(); iska method call hoga
    a->speak();//speaking with virtual new Animal();
    // a->speakNew();//nhi chal rha
    
    return 0;
}