#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks"<<endl;
    int marks;
    cin >> marks;
    //nested
    if(marks>=90){
        cout<<"A grade";
    }
    else{
        if(marks>=80){
        cout<<"B grade";
        }
        else{
            if(marks>=70){
                cout<<"C grade";
            }
            else{
                if(marks>=60){
                    cout<<"D grade";
                }
                else{
                    if(marks>=40){
                        cout<<"F grade";
                    }
                }
            }
        }
    }
    cout << endl;
    //if-else
    if(marks>=90){
        cout<<"A grade";
    }
    else if(marks>=80){
        cout<<"B grade";
        }
    else if(marks>=70){
            cout<<"C grade";
        }
    else if(marks>=60){
            cout<<"D grade";
        }
    else{
        cout<<"F grade";
    }
    //last else can be skipped
    int a;
    if(cin >> a){
        cout << a << endl;
    }
    if(cout<<"chal rha"){
        cout << "yeh bhi" << endl;
    }

}