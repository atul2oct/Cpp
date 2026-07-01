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
int main(){
    string str="aabbbcc";
    string ans=removeDuplicate(str);
    cout<<"new string without adjacent duplicates are: "<<ans<<endl;

}