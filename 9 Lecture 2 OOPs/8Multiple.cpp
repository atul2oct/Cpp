#include<iostream>
using namespace std;
// Multiple inheritance
class A {
    public:
    int physics;
};

class B{
    public:
    int chemistry;
};

class C:public A,public B {
    public:
    int maths;
};

int main(){
    C a;
    cout<<a.physics<<" "<<a.chemistry<<" "<<a.maths<<" "<<endl;
    
    return 0;
}