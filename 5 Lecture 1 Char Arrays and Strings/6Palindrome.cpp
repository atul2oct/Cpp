#include<iostream>
#include<string.h>
using namespace std;
// eg: racecar reverse is also same as before racecar noon, babbab,kadak,lol
bool Palindrome(char sentence[]){
    // 1. i/p
    // 2. reverse 'str' and store in 'strReversed'
    // 3. comparing string, if they are equal then it's a palindromic string.
    int length=strlen(sentence);
    int start=0;
    while(start < length){
        if(sentence[start] == ' '){
            sentence[start]='@';
        }
        start++;
    }
}
bool Palindrome(char sentence[]){//babbar wla
    int last=strlen(sentence)-1;
    int start=0;
    while(start < last){
        if(sentence[start] != sentence[last]){
            return false;
        }
        else{
            start++;
            last--;
        }
    }
    return true;
}
bool PalindromeOptimise(char word[]){//mera wla
    // compare using two pointer approach 
    // compare start element with last elelement if same conti
    // if not same return false
    int last=strlen(word)-1;
    int start=0;
    while(start < last){
        if(word[start] != word[last]){
            return false;
        }
        start++;
        last--;
    }
    return true;
}
int main(){
    char ch[100];
    cin>>ch;
    cout<<"starting me tha: "<<ch<<endl;
    if(PalindromeOptimise(ch)){
        cout<<"String is palindrome:"<<endl;
    }else{
        cout<<"String is not palindrome:"<<endl;
    }
    
    // cout<<"After me tha: "<<ch<<endl;
    // using pre define function
    return 0;
}