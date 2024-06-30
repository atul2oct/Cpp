#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int> arr){
    // 0 se xor krne se koi change nhi ata --> 0^1=1
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter no. of elements: ";
    cin>>n;
    vector<int> arr(n);
    cout<<endl<<"Enter the elements: "<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement=findUnique(arr);
    cout<<"Unique Element is: "<<uniqueElement;
    return 0;
}