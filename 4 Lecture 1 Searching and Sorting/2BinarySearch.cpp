#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// using pre define stl function for Binary Search
int main(){
    vector<int> arr{1,2,3,4,5,7};
    int size=arr.size();
    int target=6;
    if(binary_search(arr.begin(),arr.end(),target)){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }

    int a[]={1,2,3,4,5,6,7};
    size=7;
    if(binary_search(a,a+size,target)){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Target not found"<<endl;
    }
    


    
    return 0;
}