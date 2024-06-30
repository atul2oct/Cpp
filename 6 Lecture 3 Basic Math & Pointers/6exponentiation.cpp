
#include<iostream>
#include<vector>
using namespace std;

int normalExponentiation(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int betterExponentiation(int a,int b){
    int ans=1;
    while(b > 0){
        if(b & 1){
            // odd
            ans=ans*a;
        }
        a=a*a;
        b >>= 1;//b/2
    }
    return ans;
}

int main(){
    cout<<"Enter two no"<<endl;
    int A;
    int B;
    cin>>A;
    cin>>B;
    // int ans1=normalExponentiation(A,B);
    int ans2=betterExponentiation(A,B);
    // cout<<"Normal: "<<ans1<<endl;
    cout<<"Better: "<<ans2<<endl;
}