#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=(n&1);
        decimal=bit*pow(2,i++)+decimal;
        n/=10;
    }
    return decimal;

}
int binaryToDecimalMethod1(int n){
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=n%10;
        decimal=bit*pow(2,i++)+decimal;
        n=n/10;
    }
    return decimal;

}
int decimalToBinaryMethod2(int n){
    //Bitwise Method
    // 1. Obtain bit with bitwise AND operator i.e (N&1)
    // 2. Right shift N  by 1 (N=N>>1)
    // 3. Repeat above step till N>0
    // 4. Reverse the bits so obtained
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit=(n&1);
        binaryno=bit*pow(10,i++)+binaryno;
        n=n>>1;
    }
    return binaryno;
}
int decimalToBinaryMethod1(int n){
    //Division Method
    int binaryno=0;
    int i=0;
    while(n>0){
        int bit=n%2;
        binaryno=bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
}
int main(){
    int n;
    cout<<"Enter binary no.";
    cin>>n;
    int Decimal=binaryToDecimalMethod1(n);
    cout<<"binary to decimal by method 1: "<<Decimal<<endl;
    Decimal=binaryToDecimal(n);
    cout<<"binary to decimal by method 2: "<<Decimal<<endl;
    cout<<"Enter decimal no.";
    cin>>n;
    int binary=decimalToBinaryMethod1(n);
    cout<<"decimal to binary  by method 1: "<<binary<<endl;
    binary=decimalToBinaryMethod2(n);
    cout<<"decimal to binary  by method 2: "<<binary<<endl;
}