// i/p: 647
// o/p: print all digit of this no. 6 4 7
#include<iostream>
using namespace std;

void printDigits(int n){
    if(n == 0){
        return;
    }

    int newValueofN=n/10;
    // baki recursion sambhal lega
    printDigits(newValueofN);

    // 1 case main solve krunga
    int digit = n % 10;
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