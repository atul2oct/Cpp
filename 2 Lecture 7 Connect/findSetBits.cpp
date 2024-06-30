//no. of set bits(no. of 1's i binary no.)
#include<iostream>
using namespace std;
int main(){
    //negative no. k case me HW
    int n=3;
    //set bit counter
    int ans=0;
    while(n!=0){
        //found one set bit
        if(n&1){
            ans++;
        }
        //right shift
        n=n>>1;
    }
    cout<<ans;
}