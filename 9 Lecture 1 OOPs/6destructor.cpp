#include<iostream>
using namespace std;

class Animal{
    // state or properties
    private://iske niche sb public bann gae
    int weight;
    public://iske niche sb public bann gae
    int age;
    string name;

    // default constructor
    Animal(){
        this->age=0;
        this->weight=0;
        this->name="";
        cout<<"Constructor called"<<endl;
    }
    // parameterized constructor
    Animal(int age){
        this->age=age;
        cout<<"Paramterized Constructor called"<<endl;
    }
    Animal(int age,int weight){
        this->age=age;
        this->weight=weight;
        cout<<"Paramterized Constructor called"<<endl;
    }
    Animal(int age,int weight,string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"Paramterized Constructor called"<<endl;
    }
    // copy constructor
    Animal(Animal& obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"copy Constructor called"<<endl;
    }

    // behaviour or function or methods
    //getters ans setters
    void setWeight(int weight){//getter
        this->weight=weight;
    }
    int getWeight(){//setter
        return weight;
    }
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    ~Animal(){
        cout<<"Inside destructor"<<endl;
    }
};
int main(){
    cout<<"A obj constructor"<<endl;
    Animal a;
    a.age=5;

    cout<<"B obj constructor"<<endl;
    Animal* b=new Animal();
    b->age=12;
    delete b;//manually destructor call for dynamic memory allocaiton
    return 0;
}