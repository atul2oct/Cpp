#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1{1,2,3,5,7,9,10,20};
    vector<int> arr2{10,20,30,50,70,90};
    vector<int> unionElements;
    // brute force method
    for(int i=0;i<arr1.size();i++){
        int element=arr1[i];
        unionElements.push_back(element);
        for(int j=0;j<arr2.size();j++){
            if(element==arr2[j]){
                arr2[j]=-1;
            }
        }        
    }
    for(int i=0;i<arr2.size();i++){
        if(arr2[i]!=-1)
            unionElements.push_back(arr2[i]);
    }
    cout<<"Union Element is: "<<endl;
    for(int i=0;i<unionElements.size();i++){
        cout<<unionElements[i]<<" ";
    }
    return 0;
}