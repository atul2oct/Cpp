#include<iostream>
using namespace std;
bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}
int findMethod2(int arr[],int size,int key){
    int flag=0;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            flag=1;
            break;
        }
    }
    return flag;
}
int main(){
    int arr[5]={1,3,5,7,8};
    int size=5;
    cout<<"Enter the key to find"<<endl;
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    if(findMethod2(arr,size,key)==1){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }


}