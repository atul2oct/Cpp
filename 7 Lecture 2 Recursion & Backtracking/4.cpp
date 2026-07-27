#include<iostream>
using namespace std;
bool countKey(string str,int& n, int i, char& key){
    if(n <= i){
        return false;
    }
    if(str[i] == key){
        return true;
    }
    return countKey(str,n,++i,key);
}
void printDigits(int n){
    if(n == 0){
        return;
    }

    int newVal = n/10;
    printDigits(newVal);

    int newDigit = n%10;
    cout<<newDigit<<" ";
}
int main(){
    int n=647000;
    if(n == 0){
        cout<<n<<endl;
    }
    printDigits(n);
    return 0;
}