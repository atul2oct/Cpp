#include<iostream>
#include<string>
using namespace std;

void(char name[]){
    int len,int i;
    len =  i = 0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    cout<<"length "<<len<<endl;
}
int main(){
    char ch[100];
    cin.getline(ch,30);
    getLength(ch);
}