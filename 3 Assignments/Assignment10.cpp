// Factorial of large number

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> factorial(int N){
    // code here
    vector<int> ans;
    ans.push_back(1);

    for(int i=2;i<=N;i++){
        int carry=0;
        for(int j=0;j<ans.size();j++){
            int x=ans[j]*i+carry;
            // storing last digit
            ans[j]=x%10;
            carry=x/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int N=50;
    vector<int> ans=factorial(N);

    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}