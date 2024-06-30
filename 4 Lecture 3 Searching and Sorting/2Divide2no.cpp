// Divide two numbers using binary Search
#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend,int divisor){
    int start=0;
    int end=abs(dividend);
    int mid=start+(end-start)/2;
    int ansStore=0;

    while(start <= end){
        if(mid == abs(dividend)/abs(divisor)){
            ansStore=mid;
            break;
        }
        if(mid > abs(dividend)/abs(divisor)){
            // search left
            end=mid-1;
        }
        else{
            // search right
            ansStore=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    if((dividend<0 && divisor<0) || (dividend>0 && divisor>0)){
        return ansStore;
    }else{
        return -ansStore;
    }
    
}

int main(){
    int dividend=-22;
    int divisor=7;
    int ans=solve(dividend,divisor);
    cout<<dividend<<" / "<<divisor<<" is = "<<ans<<endl;
    cout<<"Enter decimal precision: "<<endl;
    int precision;
    cin>>precision;

    double AnsFinal=abs(ans);
    double step=0.1;
    for(int i=0;i<precision;i++){

        for(double j=AnsFinal;j*divisor<=abs(dividend);j=j+step){
            AnsFinal=j;
        }
        step=step/10;
    }
    if((dividend<0 && divisor<0) || (dividend>0 && divisor>0)){
        cout<<dividend<<" / "<<divisor<<" is = "<<AnsFinal<<endl;
    }else{
        cout<<dividend<<" / "<<divisor<<" is = "<<-AnsFinal<<endl;
    }
}