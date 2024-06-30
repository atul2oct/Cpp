#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(char first,char second){
    
    return first > second;
}

int compare(int first,int second){
    cout<<"first "<<first<<"  "<<"second "<<second<<endl;
    return first > second;
}

int main(){
    string str="babbar";
    // sort(str.begin(),str.end());->lexicographical order me sort hoga
    sort(str.begin(),str.end(),cmp);
    cout<<str<<endl;

    vector<int> x{5,4,3,2,1};
    sort(x.begin(),x.end(),compare);
    for(auto i:x){
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}