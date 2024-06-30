#include<iostream>
using namespace std;
// Multi level inheritance
class Fruit {
    public:
    string name;
};

class Mango:public Fruit {
    public:
    int weight;
};

class Alfanso:public Mango {
    public:
    int sugarLevel;
};

int main(){
    Alfanso a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarLevel<<" "<<endl;
    
    return 0;
}