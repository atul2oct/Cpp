#include<iostream>
using namespace std;
int findMax(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter 3 no."<<endl;
    cin>>a>>b>>c;
    int result=findMax(a,b,c);
    cout<<"Max of three no. is: "<<result;
    return 0;
}