// run time polymorphism
// ->function overriding
#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<< "speaking"<<endl;
    }
    
};
class Cat:public Animal{
    // no overriding
};
class Dog:public Animal{
    public:
    // jb parent class k kisi function ko khud se child class me define krte ho tb usse function overriding bolte hai.
    
    // overriding
    void speak(){
        cout<< "Barking"<<endl;
    }
    
};

int main(){
    Animal man;
    Cat billi;
    Dog dog1;
    man.speak();
    billi.speak();
    dog1.speak();
    return 0;
}