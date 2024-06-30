#include<iostream>
#include<vector>
using namespace std;
// sort os and 1s or dutch national flag problem

// find pair that upon addition gives value equal to sum
void sort(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i<arr.size()){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
}
void sort2(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start<end){
        if(arr[start]==1){
            if (arr[end]==0)
            {
                swap(arr[start],arr[end]);
            }
            end--;            
        }
        else{
            start++;
        }
    }
}
int main(){
    vector<int> arr{1,0,0,0,1,1,0,0,1,1,1};
    // sort(arr);
    cout<<endl;
    for(auto value:arr){
        cout<<value<<" ";
    }
    vector<int> a{ 0, 1, 0, 1, 1, 0,1,0,1,1};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i<arr.size()){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    cout<<endl;
    for(auto value:arr){
        cout<<value<<" ";
    }
    // sort(a);
    start=0;
    end=a.size()-1;
    i=0;
    while(i<a.size()){
        if(a[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }else{
            swap(a[i],a[end]);
            end--;
        }
    }
    cout<<endl;
    for(auto value:a){
        cout<<value<<" ";
    }
}