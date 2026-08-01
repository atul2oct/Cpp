#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>& arr,int& n,int i){
    if(i == n-1){
        return true;
    }

    if(arr[i+1] <= arr[i]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}
int binarySearch(vector<int> &arr,int start,int end, int& key){
    if(start > end){
        return -1;
    }

    int mid = (start+end)/2;
    if(arr[mid] == key){
        return mid;
    }

    return arr[mid] < key ? binarySearch(arr,mid+1,end,key) : binarySearch(arr,start,mid-1,key);
}
void printSubSequences(string str, string ans, int i){
    if(i >= str.length()){
        cout<<ans<<endl;
        return;
    }

    // exclude
    printSubSequences(str,ans,i+1);
    //include
    ans.push_back(str[i]);
    printSubSequences(str,ans,i+1);

}
string storeSubSequences(string str, string ans, int i, vector<string> v){
    if(i >= str.length()){
        cout<<ans<<endl;
        return;
    }

    // exclude
    printSubSequences(str,ans,i+1);
    //include
    ans.push_back(str[i]);
    printSubSequences(str,ans,i+1);

}
int main(){
    string str="abc";
    string output="";
    vector<string> v;
    int i=0;
    printSubSequences(str,output,i);
    storeSubSequences(str,output,i,v);
    cout<<"Printing : "<<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}