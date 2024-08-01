#include<iostream>
using namespace std;

int x = 2; //GLOBAL VARIABLES

void func(){
    cout<<"Inside function scope"<<endl;
    int x = 60;
    cout<<x<<endl;
    ::x = 40;
    cout<<::x<<endl;
}

int main(){
    cout<<"main scope"<<endl;
    // x = 4; // global x
    ::x =4; //same
    cout<< x <<endl; // global x
    int x = 20; // local to main function. means line  7 to line 12 insdie {}
    
    // preference given to local variables
    cout<< x <<endl; //local variable

    // to access global variable use ::
    cout<<::x<<endl; //global variable
    
    {
        cout<<"Inside block scope"<<endl;
        // local variable is scoped
        int x = 50;
        {
            int x = 44;
            cout<<x<<endl;
        }
        cout<<x<<endl; //most accessible is x = 50
        cout<<::x<<endl; // global
    }
    func();
    return 0;
}