#include<iostream>
#include<limits.h>
using namespace std;
void rowSum(int arr[][3],int n,int m){
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }cout<<i+1<<" Row Sum: "<<sum<<endl;
    }    
}

void colSum(int arr[][3],int n,int m){
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }cout<<i+1<<" col Sum: "<<sum<<endl;
    }    
}

bool Search(int arr[][3],int row,int col,int element){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(element == arr[i][j]){
                cout<<col*i+j<<" index"<<endl;
                cout<<"at "<<i<<"th row and "<<j<<"th col ";
                return true;
            }
        }
    }
    return false; 
}

int getMin(int arr[][3],int n,int m,int mini){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int getMax(int arr[][3],int n,int m,int maxi){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}

int main(){
    int arr[3][3]={{1,2,3},{2,3,4},{5,6,7}};
    cout<<"Row wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    rowSum(arr,3,3);
    colSum(arr,3,3);
    if(Search(arr,3,3,6)){
        cout<<"Element found: "<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    int mini=INT_MAX;
    mini=getMin(arr,3,3,mini);
    cout<<"Minimum in array: "<<mini<<endl;

    int maxi=INT_MIN;
    maxi=getMax(arr,3,3,maxi);
    cout<<"Maximum in array: "<<maxi<<endl;

    
    cout<<"Column wise"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;
    }

    return 0;

}