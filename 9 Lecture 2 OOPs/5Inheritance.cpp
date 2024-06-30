#include<iostream>
using namespace std;

class Animal {
    protected:
    int age;
    int weight;

    void eat(){
        cout<<"Eating"<<endl;
    }
};

class Dog:private Animal {
    // private
    public:
    void print(){
        cout<<this->age;
    }

};

int main(){
    Dog d1;
    // d1.eat();
    d1.print();
    
    return 0;
}