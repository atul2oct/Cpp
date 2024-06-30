#include<iostream>
using namespace std;

void printCounting(int n){
    // base case
    if(n == 0){//we have to print till 1 after 1 is printed then we will stop the program at 0
        return;
    }
    cout<<n<<"  ";
    printCounting(n-1);

}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin >> n;

    printCounting(n);
}