#include<iostream>
using namespace std;

void printDigits(int n){
    // base case
    if(n==0){
        return;
    }
    // recussrion
    printDigits(n/10);
    // processing
    int digit=n%10;
    cout<<digit<<" ";
}

int main(){
    int n=647000;
    if(n == 0){
        cout<<n<<endl;
    }
    printDigits(n);
    return 0;
}