#include<iostream>
using namespace std;

int climbStair(int n){
    // base case or stopiinig condition
    if(n==0 || n==1){
        return 1;
    }
    int ans = climbStair(n-1)+climbStair(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the no.: "<<endl;
    cin>>n;
    cout<<"Total no. of ways of climbing stair are: "<<climbStair(n)<<endl; 
}