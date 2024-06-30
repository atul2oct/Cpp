#include<iostream>
using namespace std;
int countTwo(int arr[],int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==2){
            count++;
        }
    }return count;
}
// int findMin(int arr[],int size){
//     int max=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]==2){
//             count++;
//         }
//     }return count;
// }
int main(){
    int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int a[]={2,1,1,1,0,2,0,0,1,0,1,0,1,0,1};
    int size=15;
    cout<<"The num of Two's: "<<countTwo(a,size)<<endl;
    int numZero=0;
    int numOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            numOne++;
        }
        if(arr[i]==0){
            numZero++;
        }
    }
    cout<<"The num of One's: "<<numOne<<endl<<"The num of Zero's: "<<numZero<<endl;
    return 0;
}