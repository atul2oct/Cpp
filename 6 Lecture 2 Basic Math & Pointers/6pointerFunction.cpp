#include<iostream>
using namespace std;

void solve(int arr[]){

    cout<<"size of array inside function: "<<sizeof(arr)<<endl;   
    cout<<"inside function arr: "<<arr<<endl;
    cout<<"inside function &arr: "<<&arr<<endl;

    cout<<"inside function"<<endl;
    
    arr[0]=50;

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int ch[10]={1,2,3,4};
    cout<<"size of array inside main function: "<<sizeof(ch)<<endl;
    cout<<"inside main function arr: "<<ch<<endl;
    cout<<"inside main function &arr: "<<&ch<<endl;

    // print array inside main
    for(int i=0;i<10;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    solve(ch);

    cout<<"wapis main function"<<endl;

    for(int i=0;i<10;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    return 0;
}