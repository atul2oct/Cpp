#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"Enter the value"<<endl;
    cin>>val;
    switch (val)
    {
    case 1:
        cout<<"case 1";
        break;
    case 2:
        cout<<"case 2";
        break;
    case 3:
        cout<<"case 3";
        break;
    case 4:
        cout<<"case 4";
        break;    
    default:
    cout<<"case default";
        break;
    }

    switch (val)
    {
    case 1:
        cout<<"case 1";
    case 2:
        cout<<"case 2";
    case 3:
        cout<<"case 3";
        break;
    case 4:
        cout<<"case 4";
        break;    
    default:
    cout<<"case default";
        break;
    }
}