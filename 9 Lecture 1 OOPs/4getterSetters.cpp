#include<iostream>
using namespace std;

class Animal{
    // state or properties
    private://iske niche sb public bann gae
    int weight;
    public:
    int age;
    string name;

    // behaviour or function or methods
    //getters ans setters
    void setWeight(int data){//getter
        weight=data;
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
    Animal ramesh;
    ramesh.age=12;
    ramesh.setWeight(100);
    ramesh.name="Lion";
    cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    cout<<"Weight of ramesh is : "<<ramesh.getWeight()<<endl;
    cout<<"Name of ramesh is : "<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();
    // 2. dynamic memory allocation
    return 0;
}