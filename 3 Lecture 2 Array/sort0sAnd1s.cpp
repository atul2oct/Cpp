#include<iostream>
#include<vector>
using namespace std;
// sort os and 1s or dutch national flag problem

// find pair that upon addition gives value equal to sum
vector<int> ReverseSort0sAnd1s(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i < arr.size()){
        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }else{
            swap(arr[i],arr[end]);
            end--;
        }
    }
    return arr;
}

vector<int> Sort0sAnd1sMethod1(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start < end){
        if(arr[i] == 0){
            swap(arr[i] , arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i] , arr[end]);
            end--;
        }
    }
    return arr;
}

vector<int> Sort0sAnd1sMethod2(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(start <= end){
        if(arr[i] == 0){
            swap(arr[i] , arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i] , arr[end]);
            end--;
        }
    }
    return arr;
}

vector<int> Sort0sAnd1sMethod3(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i != end){
        if(arr[i] == 0){
            swap(arr[i] , arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[i] , arr[end]);
            end--;
        }
    }
    return arr;
}

vector<int> Sort0sAnd1sMethod4(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(start < end){
        if(arr[start] == 0){
            start++;
        }
        if(arr[end] == 1){
            end--;
        }
        if(arr[start] == 1 && arr[end] == 0){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
    return arr;
}

int main(){
    vector<int> arr{1,0,0,0,1,1,0,0,1,1,1};
    // arr=ReverseSort0sAnd1s(arr);
    // arr=Sort0sAnd1sMethod1(arr);
    // arr=Sort0sAnd1sMethod2(arr);
    // arr=Sort0sAnd1sMethod3(arr);
    arr=Sort0sAnd1sMethod4(arr);

    // printing arr1
    for(auto value:arr){
        cout<<value<<" ";
    }
    cout<<endl;

    vector<int> a{0,1,0,1,1,0,1,0,1,1};
    // a=Sort0sAnd1sMethod1(a);
    // a=Sort0sAnd1sMethod2(a);
    // a=Sort0sAnd1sMethod3(a);
    a=Sort0sAnd1sMethod4(a);

    // printing arr2
    for(auto value:arr){
        cout<<value<<" ";
    }
    
}