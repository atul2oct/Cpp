// https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
#include<iostream>
#include<string>
using namespace std;

string removeOccurrences(string str,string part){
    int pos=str.find(part);
    while(pos != string::npos){
        str.erase(pos,part.length());
        pos=str.find(part);
    }
    return str;
}
// better sol from leetcode
string removeOccurrencesOptimise(string s, string part) {
        while(s.length()!=0 && s.find(part)<s.length()){//s.find(part)<s.length()  why because npos gives large value if not found loop has to be end
            s.erase(s.find(part), part.length());
        }
        return s;
    }

int main(){
    string str="daabcbaabcbc";
    string part="abc";
    string ans=removeOccurrences(str,part);
    cout<<"new string without part are: "<<ans<<endl;

}