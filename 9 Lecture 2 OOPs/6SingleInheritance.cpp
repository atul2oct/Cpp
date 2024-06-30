#include<iostream>
using namespace std;
// single level inheritance
class Car {
    public:
    string name;
    // private:
    int age;
    int weight;

    void speedUp(){
        cout<<"Speeding Up"<<endl;
    }
    void breakMaaro(){
        cout<<"Break Maaro"<<endl;
    }
};

class Scorpio:public Car {
};

int main(){
    Scorpio BabbarWali;
    BabbarWali.speedUp();
    
    return 0;
}