#include<iostream>
using namespace std;

int solve(int num){
    num++;
}

int solve2(int& num){
    num++;
}

int main(){
    int a=5;
    solve(a);
    cout<<a<<endl;
    solve2(a);
    cout<<a<<endl;
    return 0;
}