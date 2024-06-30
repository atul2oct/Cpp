#include<iostream>
#include<vector>
using namespace std;
// using Seive of Eratosthenes

int countPrime(int n){
    if(n == 0) return 0;
    vector<bool> prime(n,true);//all marked prime already
    prime[0]=prime[1]=false;

    int count=0;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            int j=i*2;
            while(j < n){
                prime[j]=false;
                j+=i;
            }
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