#include<iostream>
#include<string.h>
using namespace std;

int getLength(char name[]){
    int len, i;
    len =  i = 0;
    while(name[i] != '\0'){
        len++;
        i++;
    }
    return len;
}
void getReverse(char ch[]){
    int end = getLength(ch)-1;
    int start =0;
    while(start < end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}
bool palindrome(char word[]){
    int end = strlen(word)-1;
    int start = 0;
    while(start < end){
        if(word[start] != word[end]){
            return false;
        }
        end--;
        start++;
    }
    return true;
}

void convertIntoUpperCase(char ch[]){
    int len = strlen(ch);
    for(int i=0;i<len;i++){
        // cout<<ch[i]<<endl;
        ch[i] = (ch[i] != ' ') ? ch[i]- 'a' + 'A' : ch[i];
        // cout<<ch[i]<<endl;
    }
    cout<<ch<<endl;
}

int main(){
    char ch[100];
    cin.getline(ch,30);
    // cout<<ch<<endl;
    convertIntoUpperCase(ch);    
}