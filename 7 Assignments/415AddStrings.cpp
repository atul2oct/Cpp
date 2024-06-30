// https://leetcode.com/problems/add-strings/
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string addRE( string num1,int p1, string num2, int p2, int carry=0) {
    // base case
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            string ans(1,carry+'0');
            return ans;
        }
        return "";
    }
    // one case sol
    int n1=(p1 >= 0 ? num1[p1] : '0') - '0';   // -"0" krne se int me convert hoga
    int n2=(p2 >= 0 ? num2[p2] : '0') - '0';
    int cSum = n1 + n2 + carry;
    int lastDigit = cSum % 10;
    carry = cSum / 10;
    string ans="";
    ans.push_back(lastDigit + '0'); //+ '0' krne se string bann gya

    // RE
    ans += addRE(num1,p1-1,num2,p2-1,carry);
    return ans;
}
string addStrings(string num1, string num2) {
    string ans=addRE(num1,num1.size()-1,num2,num2.size()-1);
    reverse(ans.begin(),ans.end());
    return ans;
}

void addREBetter( string& num1,int p1, string& num2, int p2, int& carry,string& ans) {
    // base case
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            ans.push_back(carry + '0');
        }
        return ;
    }
    // one case sol
    int n1=(p1 >= 0 ? num1[p1] : '0') - '0';   // -"0" krne se int me convert hoga
    int n2=(p2 >= 0 ? num2[p2] : '0') - '0';
    int cSum = n1 + n2 + carry;
    int lastDigit = cSum % 10;
    carry = cSum / 10;
    ans.push_back(lastDigit + '0'); //+ '0' krne se string bann gya

    // RE
    addREBetter(num1,p1-1,num2,p2-1,carry,ans);
}
string addStringsBetter(string num1, string num2) {
    string ans="";
    int carry=0;
    addREBetter(num1,num1.size()-1,num2,num2.size()-1,carry,ans);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    // string num1="11";
    // string num2="123";
    string num1="456";
    string num2="77";
    // string ans=addStrings(num1,num2);
    string ans=addStringsBetter(num1,num2);
    cout<<ans<<endl;
}