#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void removeOCCRE(string& s, string& part) { 
        int found=s.find(part);
        if(found != string::npos){
            // part string has been located
            // please remove it
            string left_Part=s.substr(0,found);
            string right_Part=s.substr(found+part.size(),s.length());
            s=left_Part + right_Part;
            removeOCCRE(s,part);
        }    
        else{
            return;
        }
}

string removeOccurrences(string s, string part) {
        removeOCCRE(s,part);
        return s;        
}

int main(){
    string str="daabcbaabcbc";
    string part="abc";
    string ans=removeOccurrences(str,part);
    cout<<"new string without part are: "<<ans<<endl;

}