// Add two numbers represented by two arrays
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string calc_Sum(vector<int> a,int n,vector<int> b,int m){
    // Complete the function
    string ans;
    int i=n-1;
    int j=m-1;
    int count=0;
    int carry=0;
    
    while(i>=0 && j>=0){
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--,j--;
    }
    // if first is bigger
    while(i>=0 ){
        int x=a[i]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        i--;
    }
    // if second is bigger
    while(j>=0){
        int x=b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');
        carry=x/10;
        j--;
    }
    // if carry no zero
    if(carry){
        ans.push_back(carry+'0');
    }
    // if last digit is zeros which will be infront after reverse
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    // vector<vector<int>> arr {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> A = {9, 5, 4, 9};
    vector<int> B = {2, 1, 4};
    string ans=calc_Sum(A,A.size(),B,B.size());
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}