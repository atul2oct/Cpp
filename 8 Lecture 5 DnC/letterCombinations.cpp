// https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/
#include<iostream>
#include<vector>
using namespace std;

void letterCombinations(vector<string> &ans,vector<string> &mapping,string &output,int index,string &digits){
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    // 1 case solve , baki RE
    int digit=digits[index]-'0';//int me convert hoga char
    string value=mapping[digit];
    for(int i=0;i<value.length();i++){
        char ch=value[i];
        // include
        output.push_back(ch);
        // RE call
        letterCombinations(ans,mapping,output,index+1,digits);
        // Backtracking
        output.pop_back();
    }
}
int main(){
    string digits="23";
    int index=0;
    vector<string> ans;
    if(digits.length() == 0){
        return 0;
    }
    vector<string> mapping(10);
    string output="";
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    letterCombinations(ans,mapping,output,index,digits);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;

}