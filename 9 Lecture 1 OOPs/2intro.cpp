#include<iostream>
using namespace std;

class Animal{
    // state or properties
    public://iske niche sb public bann gae
    int age;
    string name;

    // behaviour or function or methods
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
    ramesh.name="Lion";
    cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    cout<<"Name of ramesh is : "<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();
    // 2. dynamic memory allocation -> file no. 5 me hai
    return 0;
}