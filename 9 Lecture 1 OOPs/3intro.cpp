#include<iostream>
using namespace std;

class Animal{
    // state or properties
    private://iske niche sb private bann gae
    int age;
    public://iske niche sb public bann gae
    string name;

    // behaviour or function or methods
    void eat(){}
    void sleep(){}
};
int main(){
    // object creation
    // 1.static memory allocation
    Animal ramesh;
    // cout<<"Age of ramesh is : "<<ramesh.age<<endl;
    cout<<"Name of ramesh is : "<<ramesh.name<<endl;
    // 2. dynamic memory allocation
    return 0;
}