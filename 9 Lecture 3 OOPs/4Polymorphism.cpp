// run time polymorphism
// downcasting

#include<iostream>
using namespace std;

class Animal{
    public:
    Animal(){
        cout<<"i am inside animal constructor"<<endl;
    }
    void speakOld(){
        cout<< "speaking Old"<<endl;
    }
    // virtual void speak(){
    //     cout<< "speaking"<<endl;
    // }
    
};
class Dog:public Animal{
    public:

    Dog(){
        cout<<"i am inside dog constructor"<<endl;
    }    
    // overriding
    void speakOld(){
        cout<< "Barking old"<<endl;
    }
    // void speak(){
    //     cout<< "Barking"<<endl;
    // }
};

int main(){
    // UpCasting
    Animal* a = new Animal();
    cout<< "next"<<endl;
    Dog* b = new Dog();
    cout<< "next"<<endl;

    // heap memory me actual object dog type hai object hai usko animal k pointer se refer kr rhe ho
    // toh animal class(inheritance) and dog dono ka constrcutor call hoga 
    Animal* obj1 = new Dog();
    cout<< "next"<<endl;

    // heap memory me actual object animal type hai object hai usko dog k pointer se refer kr rhe ho
    // toh animal class constrcutor call hoga
    Dog* obj2 = (Dog*)new Animal();
    
    return 0;
}