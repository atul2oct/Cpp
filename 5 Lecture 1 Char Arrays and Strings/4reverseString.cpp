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
// two pointer approach
void getReverseCharArray(char name[]){
    int last=getLength(name)-1;
    int start=0;
    while(start < last){
        swap(name[start],name[last]);
        start++;
        last--;
    }
}
int main(){
    char ch[100];
    cout<<"Enter your character "<<endl;
    cin>>ch;
    cout<<"starting me tha: "<<ch<<endl;
    getReverseCharArray(ch);
    cout<<"After me tha: "<<ch<<endl;
    // using pre define function
    return 0;
}