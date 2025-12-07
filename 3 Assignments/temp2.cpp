#include<iostream>
#include<vector>
using namespace std;

void findMissing(vector<int> & a, int n){
    
    // visited method
   
    for(int i=0;i<a.size();i++){
        int index = abs(a[i]);

        if(a[index - 1] > 0){
            a[index - 1] *= -1;
        }

    }

    for(int i=0;i<a.size();i++){
        if(a[i] > 0)
            cout<<i+1<<" ";        
    }       

}

void findMissing2(vector<int> & a, int n){
    
    //  sort swap
   
    // sort part
    int i=0;
    while(i < n){
        int index=a[i] - 1;
        if(a[i] != a[index]){
            swap(a[i],a[index]);
        }
        else{
            i++;
        }
    }

    for(int i=0;i<a.size();i++){
        if(a[i] != i+1)
            cout<<i+1<<" ";        
    }       

}

void Array(vector<int> arr){
    for(auto value : arr){
        cout<<value<<"  ";
    }
    cout<<endl;
}
void sort(vector<int> arr){
    int zero=0,one=0,two=0;

    for(auto value : arr){
        if(value == 0){
            zero++;
        }else if(value == 1){
            one++;
        }else{
            two++;
        }

    }
    int i = 0;
    while(zero--) arr[i++] = 0;
    while(one--) arr[i++] = 1;
    while(two--) arr[i++] = 2;
    Array(arr);
}


void sort1(vector<int> arr){
    int l=0,m=0,h=arr.size()-1;
    while(m <= h){
        if(arr[m] == 0){
            swap(arr[m],arr[l]);
            l++,m++;
        }else if(arr[m] == 1){
            m++;
        }else{
            // if arr[m] == 2
            swap(arr[m],arr[h]);
            h--;
        }
    }
    Array(arr);
}
void moveAllNegativeToLeft(vector<int> arr){
    int l=0,h =arr.size()-1;
    while(l<h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h] > 0){
            h--;
        }else{
            // (+ve no hai)arr[l] > 0 and arr[h] < 0(-ve no hai)
            swap(arr[l],arr[h]);
        }
    }
    Array(arr);
}

int findDuplicate3(vector<int> arr){
    int ans= -1;
    for(int i=0;i<arr.size();i++){
        int index = abs(arr[i]);
        // already visited
        if(arr[index] < 0){
            ans = index;
            break;
        }
        // mark visited
        arr[index] *= -1;
    }
    return ans;
}
int findDuplicate(vector<int> arr){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0],arr[arr[0]]);
    }
    return arr[0];
}

void findMissing(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        int index = abs(arr[i]);
        if(arr[index-1] > 0)
            arr[index-1] *= -1;
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] > 0){
            cout<<i+1;
        }
    }
    
}

void findMissing2(vector<int> & arr){
    int i=0;
    while(i<arr.size()){
        int index = arr[i] - 1;
        if(arr[index] != arr[i]){
            swap(arr[index],arr[i]);
        }else{
            i++;
        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
}
int main(){
    // vector<int> arr {1,3,5,3,4};
    // findMissing2(arr,arr.size());

    // vector<int> arr{2,0,2,1,1,0};
    // vector<int> arr{2,0,1};
    // sort1(arr);
    // vector<int> arr{1,2,-3,4,-5,6};
    // vector<int> arr{1,-1,-3,-4,-6};
    // moveAllNegativeToLeft(arr);

    // vector<int> nums {1,3,4,2,2};
    // cout<<findDuplicate(nums)<<endl;

    vector<int> arr {1,3,5,3,4};
    // findMissing(arr,arr.size());
    findMissing2(arr);

    return 0;
}