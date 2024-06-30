#include<iostream>
#include<string.h>
using namespace std;

/*convert into uppercase 
    'a'->97 and 'A'->65
    'a'-'a'+'A'='A'

eg: 'c'
    'c'-'a'+'A'
    99-97+65=2+65=67=>'C'

*/
int getLength(char name[]){
    int length=0;
    int i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void convertIntoUpperCase(char ch[]){
    int length=getLength(ch);
    for(int i=0;i<length;i++){
        ch[i]=ch[i]-'a'+'A';
    }
}
/*convert into lowercase 
    'a'->97 and 'A'->65
    'A'-'A'+'a'='a'

eg: 'C'
    'C'-A'+'a'
    67-65+97=2+97=99=>'c'

*/
int main(){
    char ch[100];
    cin>>ch;
    cout<<"starting me tha: "<<ch<<endl;
    int length=getLength(ch);
    convertIntoUpperCase(ch);
    for(int i=0;i<length;i++){
        cout<<ch[i];
    }
    return 0;
}