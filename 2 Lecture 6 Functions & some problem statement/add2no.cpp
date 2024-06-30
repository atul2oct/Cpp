#include<iostream>
using namespace std;
int add(int a,int b);//function declaration
int main(){
    int a;
    cout<<"Enter the value of A:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of B:"<<endl;
    cin>>b;
    int sum=add(a,b);//is uper hoga toh chalge niche hoga toh nhi chalega(function ki declaration iss line se uper kahi bhi honi chaheye)
    cout<<"Addition result is: "<<sum;
    return 0;
}
int add(int a,int b){
    int result=a+b;
    return result;
}