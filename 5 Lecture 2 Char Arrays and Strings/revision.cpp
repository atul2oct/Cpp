#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string str){
    string ans = "";
    int i=0;
    while(i < str.length()){
        if(ans.length() > 0 && ans[ans.length()-1] == str[i]){
            ans.pop_back();
        }else{
            ans.push_back(str[i]);
        }
        i++;
    }
    return ans;
}
string removeOccurrencesOld(string s,string part){
    int pos = s.find(part);
    while(pos != string::npos){
        s.erase(pos,part.length());
        pos = s.find(part);
    }
    return s;
}
string removeOccurrences(string s,string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        //s.find(part)<s.length()  why because npos gives large value if not found loop has to be end
        s.erase(s.find(part),part.length());
    }
    return s;
}

bool checkPalindorm(string s,int i, int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool validPalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return checkPalindorm(s,i+1,j) || checkPalindorm(s,i,j-1);
        }else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    // string str="daabcbaabcbc";
    // string ans=removeDuplicate(str);
    // string part="abc";
    // string ans=removeOccurrences(str,part);
    // cout<<"new string without adjacent duplicates are: "<<ans<<endl;
    string str="abccba";
    if(validPalindrome(str)){
        cout<<"it is valid palindrome"<<endl;
    }else{
        cout<<"it is not a valid palindrome"<<endl;
    }

}