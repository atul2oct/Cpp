// gcd or hcf
#include<iostream>
#include<vector>
using namespace std;

int gcd(int A,int B){
    if(A==0) return B;
    if(B==0) return A;

    while(A > 0 && B > 0){
        if(A > B){
            A=A - B;
        }else{
            B=B - A;
        }
    }
    return A == 0 ? B : A;
}

int main(){
    cout<<"Enter to no"<<endl;
    int A;
    int B;
    cin>>A;
    cin>>B;
    int ans=gcd(A,B);
    cout<<"Ans: "<<ans<<endl;
}