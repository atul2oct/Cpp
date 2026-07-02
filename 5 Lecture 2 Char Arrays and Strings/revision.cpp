#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include <limits.h>
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
int findMinDifference(vector <string> s){
    vector<int> minutes;
    for(int i=0;i<s.size();i++){
        string curr = s[i];
        int hr=stoi(curr.substr(0,2));
        int min=stoi(curr.substr(3,2));

        minutes.push_back(hr*60+min);
    }
    sort(minutes.begin(),minutes.end());

    int mini = INT_MAX;
    for(int i=0;i<minutes.size();i++){
        mini = min(mini,(minutes[i+1]-minutes[i]));
    }

    // case first and last
    int lastDiff1= minutes[0]+1440 - minutes[minutes.size()-1];
    int lastDiff2= minutes[minutes.size()-1]-minutes[0];
    int tempmini=min(lastDiff1,lastDiff2);
    return min(mini,tempmini);
}
int expandAroundIndex(string s,int i,int j){
    int count=0;
    while(i >= 0 && j < s.length() && s[i] == s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s) {
    int count = 0;
    for(int i=0;i<s.length();i++){
        count+= expandAroundIndex(s,i,i);
        count+= expandAroundIndex(s,i,i+1);
    }
    return count;
}
int main(){
    // string str="daabcbaabcbc";
    // string ans=removeDuplicate(str);
    // string part="abc";
    // string ans=removeOccurrences(str,part);
    // cout<<"new string without adjacent duplicates are: "<<ans<<endl;
    // string str="abccba";
    // if(validPalindrome(str)){
    //     cout<<"it is valid palindrome"<<endl;
    // }else{
    //     cout<<"it is not a valid palindrome"<<endl;
    // }
    // vector <string> str{"00:00","23:59"};
    // cout<<findMinDifference(str)<<endl;
    string s = "aaa";
    cout<<"total palindrome are: "<<countSubstrings(s)<<endl;
}