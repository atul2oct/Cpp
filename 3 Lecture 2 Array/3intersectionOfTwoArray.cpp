#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1{1,1,2,3,5,7,9};
    vector<int> arr2{1,1,2,30,50,7,90};
    vector<int> unionElements;
    // arr1
    for(int i=0;i<arr1.size();i++){
        int element=arr1[i];
        // arr2
        for(int j=0;j<arr2.size();j++){
            if(element==arr2[j]){
                // mark for not match again else ans ==>1 1 1 1 2 7
                arr2[j]=-1;
                unionElements.push_back(element);
            }

        }
        
    }
    cout<<"Union Element is: "<<endl;
    for(auto value:unionElements){
        cout<<value<<" ";
    }
    return 0;
}