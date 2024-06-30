#include<iostream>
using namespace std;
// Multiple inheritance abiguity proble jb dono parent ki koi same property hai tb child kaun si access kre
class A {
    public:
    string chemistry;
    A(){
        chemistry="A wle";
    }
};

class B{
    public:
    string chemistry;
    B(){
        chemistry="B wle";
    }
};

class C:public A,public B {
    public:
    int maths;
};

int main(){
    C obj;
    // :: -> scope resolution operator
    cout<<obj.A::chemistry<<" "<<obj.maths<<" "<<endl;//A ki chemistry ki value
    cout<<obj.B::chemistry<<" "<<obj.maths<<" "<<endl;//B ki chemistry ki value
    
    return 0;
}