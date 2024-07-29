#include<iostream>
using namespace std;

class abc{
    // private
        mutable int x;
        int *y;
        const int z; //should be initialized in ctor case

    public:
    
    // contructor - ctor : old style
        //default argument
        // abc(int _val1=0, int _val2=0 ,int _val3=0){
        //     x=_val1;
        //     y=new int(_val2);
        //     z=_val3; //expression must be a modifiable lvalue
        // }

    // initialsation list
        // you can assign a const value here
        abc(int _val1=0, int _val2=0, int _val3=0) : x(_val1), y(new int(_val2)), z(_val3){
            // here you can write code
            cout<<"initialsation list"<<endl;
            *y=200;
            // z=100; // You cannot reassign a const value here error: assignment of read-only member expression must be a modifiable lvalue
        }

// ab yeh method getX kabhi bhi yeh kisi bhi variable ko modify/reinitialise nhi kr sakta
        int getX() const
        {
            // x=50; //expression must be a modifiable lvalue
            x=10; //if x is mutable then it will run
            return x;
        }
        void setX(int _val){
            x = _val;
        }

        int getY() const
        {
            return *y;
        }

        void setY(int _val){
            *y = _val;
        }

};

void printABC(const abc &a){
    // const  object le liya toh ab koi aise call ni honi chaheye jo non const ho
    cout<<a.getX()<<" "<<a.getY()<<endl;
}
int main(){
    abc obj;
    cout<<obj.getX()<<" "<<obj.getY()<<endl;

    abc a(1,2);
    printABC(a);
    return 0;
}