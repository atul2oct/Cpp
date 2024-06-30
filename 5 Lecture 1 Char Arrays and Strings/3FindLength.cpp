#include<iostream>
#include<string.h>
using namespace std;
int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}
int main(){
    char ch[100];
    cout<<"Enter your character "<<endl;
    cin.getline(ch,50);
    cout<<"Length of string is: "<<getLength(ch)<<endl; 
    // using pre define function
    cout<<"Length of string is: "<<strlen(ch)<<endl; 
    return 0;
}