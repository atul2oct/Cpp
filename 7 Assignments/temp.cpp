
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
void add(string& num1,int p1,string& num2,int p2,int& carry,string& ans){
    if(p1 < 0 && p2 < 0){
        if(carry!=0){
            ans.push_back(carry+'0');
        }
        return;
    }
    int n1=(p1 >= 0 ? num1[p1] : '0') - '0';
    int n2=(p2 >= 0 ? num2[p2] : '0') - '0';
    int num=n1+n2+carry;
    int lastDigit=num%10;
    carry=num/10;
    ans.push_back(lastDigit+'0');
    add(num1,p1-1,num2,p2-1,carry,ans);

}
string addStringsBetter(string num1,string num2){
    string ans="";
    int carry=0;
    add(num1,num1.length()-1, num2,num2.length()-1,carry,ans);
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