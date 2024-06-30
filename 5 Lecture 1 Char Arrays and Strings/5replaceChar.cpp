#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char sentence[]){
    int length=strlen(sentence);
    int start=0;
    while(start < length){
        if(sentence[start] == ' '){
            sentence[start]='@';
        }
        start++;
    }
}
int main(){
    char ch[100];
    cout<<"Enter your sentence "<<endl;
    cin.getline(ch,50);
    cout<<"starting me tha: "<<ch<<endl;
    replaceSpaces(ch);
    cout<<"After me tha: "<<ch<<endl;
    // using pre define function
    return 0;
}