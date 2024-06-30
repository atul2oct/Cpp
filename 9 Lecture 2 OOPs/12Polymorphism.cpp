// complie time polymorphism
// operator overloading
// kaun kaun se operator ko overload kr sakte hai
// 1:35
#include<iostream>
using namespace std;

class Param{
    public:
    int val;
    void operator+ (Param& object2){
        int value1 = this->val;
        int value2 = object2.val;
        cout<< value2 - value1<<endl;
    }
    
};

int main(){
    Param object1,object2;
    object1.val = 7;
    object2.val = 2;
    // this should print the difference between them
    object1 + object2;  
    // isko aise treat kro object1.add(object2) object1 as current object ja rha ur object2 as parameter pass ho rha  
    return 0;
}