#include<iostream>
#include<vector>
using namespace std;
// sort os and 1s or dutch national flag problem
// find pair that upon addition gives value equal to sum

// same code in function not working
void sortZeroesAndOne(vector<int> input)
{
    //Write your code here
    int nextZero=0;
    for(int i=0;i<input.size();i++){
        if(input[i]==0){
            swap(input[i],input[nextZero]);
            nextZero++;
        }
    }

}
void sort(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end){
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
int main(){
    // vector<int> arr{1,0,0,0,1,1,0,0,1,1,1};
    // vector<int> a{ 0, 1, 0, 1, 1, 0,1,0,1,1};
    // sort(arr);
    vector<int> arr{1 ,1, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start<end){// or while(i!=end)
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

    vector<int> a{1 ,1, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
    sortZeroesAndOne(a);
    cout<<endl;
    for(auto value:a){
        cout<<value<<" ";
    }

    vector<int> b{1 ,1, 0, 0, 1, 0, 0, 0, 0, 0, 1 };
    sort(b);
    cout<<endl;
    for(auto value:b){
        cout<<value<<" ";
    }
}