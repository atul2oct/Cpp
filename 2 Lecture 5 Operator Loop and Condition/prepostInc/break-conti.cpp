#include<iostream>
using namespace std;
int main(){
    //break->when break execute program will out from current currly brackets
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Atul";
            break;
            cout<<"execute nhi hoga";
        }
        cout<<"kumar";
        break;
        cout<<"execute nhi hoga";
    }
    cout<<"Yadav";
    cout<<endl<<"execute hoga";
    //continue->when conti execute program skip code below
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Atul";
            continue;
            cout<<"execute nhi hoga";
        }
        cout<<"kumar";
        continue;
        cout<<"execute nhi hoga";
    }
    cout<<"Yadav";
}