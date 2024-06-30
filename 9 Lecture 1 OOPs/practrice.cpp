#include<iostream>
using namespace std;

class Animal{
    private:
    int weight;

    public:
    int age;
    string name;

    // contructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"Default constructor"<<endl;
    }

    Animal(int age){
        this->age=age;
        this->weight=0;
        this->name="";
        cout<<"1 Parameterised constructor"<<endl;
    }

    Animal(int age, int weight){
        this->age=age;
        this->weight=weight;
        this->name="";
        cout<<"2 Parameterised constructor"<<endl;
    }

    Animal(int age,int weight,string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"3 Parameterised constructor"<<endl;
    }

    // copy
    Animal(Animal& obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"copy Constructor called"<<endl;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    int getWeight(){
        return weight;
    }
    ~Animal(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Animal* a = new Animal();
    (*a).age=10;
    (*a).name="atul";
    (*a).setWeight(100);
    cout<<"A name is:"<<(*a).name<<endl;
    cout<<"A age is:"<<(*a).age<<endl;
    cout<<"A weight is:"<<(*a).getWeight()<<endl;

    Animal* b = new Animal();
    b->age=18;
    b->name="atjnjul";
    b->setWeight(1000);
    cout<<"A name is:"<<(*b).name<<endl;
    cout<<"A age is:"<<(*b).age<<endl;
    cout<<"A weight is:"<<(*b).getWeight()<<endl;

    Animal* c = new Animal(10);
    cout<<"A name is:"<<(*c).name<<endl;
    cout<<"A age is:"<<(*c).age<<endl;
    cout<<"A weight is:"<<(*c).getWeight()<<endl;

    Animal* d = new Animal(10,120,"atulyy");
    cout<<"A name is:"<<(*d).name<<endl;
    cout<<"A age is:"<<(*d).age<<endl;
    cout<<"A weight is:"<<(*d).getWeight()<<endl;

    Animal* e = new Animal(10,100);
    cout<<"A name is:"<<(*e).name<<endl;
    cout<<"A age is:"<<(*e).age<<endl;
    cout<<"A weight is:"<<(*e).getWeight()<<endl;

    delete e;
    return 0;
}