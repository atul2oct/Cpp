#include<iostream>
#include<math.h>
using namespace std;
// using sqrt approach
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    int SqrtN=sqrt(n);
    for(int i=2;i<=SqrtN;i++){
        if(n % i == 0){
            return false;
        }
    }return true;    
}

int countPrime(int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
            count++;
        }
    }return count;
}

int main(){
    int n;
    cout<<"Enter no to count prime"<<endl;
    cin>>n;
    int prime=countPrime(n);
    cout<<"No of total primes are: "<<prime<<endl;
}