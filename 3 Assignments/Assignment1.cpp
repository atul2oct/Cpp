// 75- Sort Color or Sort an array of 0,1,2
// i/p 2 0 2 1 1 0 -----o/p 0 0 1 1 2 2
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> arr){
    for(auto value:arr){
        cout<<value<<" ";
    }cout<<endl;
}
// not applicable
void sort1(vector<int> arr){
    sort(arr.begin(),arr.end());
    print(arr);
}
// counting method-->isme suffel ho rha hai
//time complexity  O(n) space complexity-0(1)
void sort2(vector<int> arr){
    int zero=0,one=0;
    for(auto value:arr){
        if(value==0){
            zero++;
        }
        if(value==1){
            one++;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(zero!=0){
            zero--;
            arr[i]=0;
        }else if(one!=0){
            one--;
            arr[i]=1;
        }else{
            arr[i]=2;
        }
    }
    print(arr);
}
//time complexity  O(n) space complexity-0(1)
void sort2MEthod2(vector<int> arr){
    int zero=0,one=0,two=0;
    for(auto value:arr){
        if(value==0){
            zero++;
        }
        else if(value==1){
            one++;
        }else{
            two++;
        }
    }
    int i=0;
    while(zero--){
        arr[i]=0;
        i++;
    }
    while(one--){
        arr[i]=1;
        i++;
    }
    while(two--){
        arr[i]=2;
        i++;
    }
    print(arr);
}
// inplace suffel sort solution three pointer approach
void sort3(vector<int> arr){
    // LOW zeros ko left krega MEDIUM one ko HIGH twos ko right me leaga
    int l=0,m=0;
    int h=arr.size()-1;
    while(m <= h){// dry run 2 0 1 to find <= why not <
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    print(arr);
}
int main(){
    vector<int> arr{2,0,2,1,1,0};
    // sort1(arr);
    // sort2(arr);
    // sort2MEthod2(arr);
    sort3(arr);

}