#include<iostream>
using namespace std;

int main(){
    char ch[100];
    cout<<"Enter your name "<<endl;
    // take input as sequence
    cin>> ch;
//     Enter your name 
//     Atul Kumar Yadav


    cout<<"AApka naam: "<<ch<<" hai "<<endl;
    // AApka naam: Atul hai only character sequence before space. 

    char ch2[100];
    
    ch[0]='a';
    ch[1]='b';
    // take input as single character only
    cout<<"Enter single character only "<<endl;
    cin>> ch[2];
    cout<<ch[0]<<ch[1]<<ch[2]<<endl;


    cout<<"Null Character"<<endl;
    char name[100];
    cin>> name;//babbar
    for(int i=0;i<7;i++){
        cout<<"index: "<<i<<" value: "<<name[i]<<endl;
    }
    int value1=(int)name[6];//null character \0 ascii value is 0
    int value2=(int)name[7];
    cout<<"The values are: "<<value1<<" "<<value2<<endl;


    return 0;
}