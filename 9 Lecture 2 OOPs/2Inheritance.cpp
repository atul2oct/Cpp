#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};
// class child : mode of inhertance parent class
class Dog:public Animal {
    public:
    void print(){
        cout<<this->age;
    }

};

int main(){
    Dog d1;
    d1.eat();
    d1.age=10;
    d1.print();
    
    return 0;
}