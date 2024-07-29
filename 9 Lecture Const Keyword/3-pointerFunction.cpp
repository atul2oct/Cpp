#include<iostream>
using namespace std;

class abc{
    // private
        mutable int x;
        int *y;

    public:
    
        //default argument
        abc(int _val1=0, int _val2=0){
            x=_val1;
            y=new int(_val2);
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