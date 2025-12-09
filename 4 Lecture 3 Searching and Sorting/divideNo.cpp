#include<iostream>
using namespace std;

int solve(int divident, int divisor){
    int start = 0;
    int end = abs(divident);
    int mid = start + (end-start)/2;
    int ansStore = 0;

    while(start <= end){
        if(mid == abs(divident/divisor)){
            ansStore = mid;
            break;
        }
        else if(mid > abs(divident/divisor)){
            end = mid -1;
        }else{
            ansStore = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }

    if((divident < 0 && divisor < 0) || (divident > 0 && divisor > 0)){
        return ansStore;
    }else{
        return -ansStore;
    }
}
int main(){
    int dividend=-22;
    int divisor=7;
    int ans=solve(dividend,divisor);
    cout<<dividend<<" / "<<divisor<<" = "<<ans<<endl;

    cout<<"Enter decimal precision: "<<endl;
    int precisiion;
    cin>>precisiion;

    double finalAns = abs(ans);
    double step = 0.1;

    for(int i = 0;i<precisiion;i++){
        for(double j = finalAns;j*divisor<=abs(dividend);j=j+step){
            finalAns = j;
        }
        step = step/10;
    }

    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
        cout<<dividend<<" / "<<divisor<<" = "<<finalAns<<endl;
    }else{
        cout<<dividend<<" / "<<divisor<<" = "<<-finalAns<<endl;
    }
    // cout<<dividend<<" / "<<divisor<<" = "<<finalAns<<endl;

}