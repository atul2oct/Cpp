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
        cout<<"Default Constructor called"<<endl;
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
};
int main(){
    // object creation
    // 1.static memory allocation
    // 2. dynamic memory allocation
    Animal* suresh=new Animal;
    cout<<"suresh: "<<suresh<<endl;
    // cout<<"*suresh: "<<(*suresh)<<endl;
    (*suresh).age=12;
    (*suresh).name="billi";
    cout<<"Age of ramesh is : "<<(*suresh).age<<endl;
    cout<<"Name of ramesh is : "<<(*suresh).name<<endl;

    // alternate - dynamic
    suresh->age=17;
    suresh->name="kutta";
    cout<<"Age of ramesh is : "<<suresh->age<<endl;
    cout<<"Name of ramesh is : "<<suresh->name<<endl;

    Animal a(10);
    cout<<"Age of a is : "<<a.age<<endl;
    Animal* b=new Animal(100);
    cout<<"Age of b is : "<<b->age<<endl;
    Animal* c=new Animal(100,10);
    cout<<"Age of c is : "<<c->age<<endl;    
    cout<<"Age of c is : "<<c->getWeight()<<endl;

    // copy constructor
    Animal A(10);
    Animal* B=new Animal(100,10,"Babbar");
    // object copy
    Animal C=A;
    Animal D(A);
    Animal E(*B);
    return 0;
}